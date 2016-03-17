[BITS 64]

section	.text
	global	strchr:function

strchr:
	push	rbp		; saving stack
	mov	rbp, rsp
_loop:
	cmp	BYTE[rdi], sil	; compare with the last 8 bit from rsi
	je	_end_success
	cmp	BYTE[rdi], 0
	je	_exit_zero
	inc	rdi
	jmp	_loop

_restore_stack:
	mov	rsp, rbp	; restore stack
	pop	rbp
	ret

_end_success:
	mov	rax, rdi
	call	_restore_stack
	ret

_exit_zero:
	mov	rax, 0
	call	_restore_stack
	ret
