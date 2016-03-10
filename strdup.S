[BITS 64]

section .text
	global	strdup:function
	extern	strlen
	extern	malloc	

strdup:
	push	rbp			; saving stack
	mov	rbp, rsp

	push	rdi			; push rdi on the stack
	call	strlen			wrt ..plt
	mov	rcx, rax		; move strlen return in rcx
	inc	rcx			; Add \0 len
	mov	rdi, rcx		; malloc(rcx)
	call	malloc			wrt ..plt
	test	rax, rax		; Test malloc return
	jz	_failure_exit		; If malloc return 0 -> quit
	pop	rdi			; restore rdi
	mov	rcx, 0
_copy:
	cmp	BYTE[rdi], 0		; compare with '\0'
	je	_success_exit
	mov	bl, BYTE[rdi]
	mov	[rax + rcx], bl		; set value
	inc	rdi
	inc	rcx
	jmp	_copy

_success_exit:
	mov	BYTE[rax + rcx], 0	; set \0
	call	_rest_stack
	ret

_rest_stack:
	mov	rsp, rbp		; restore stack
	pop	rbp
	ret

_failure_exit:
	call	_rest_stack
	mov	rax, 0
	ret				; return value

