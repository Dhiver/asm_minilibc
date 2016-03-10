[BITS 64]

global	strchr:function

strchr:
	push	rbp		; saving stack
	mov	rbp, rsp

_loop:
	cmp	BYTE[rdi], 0	; compare current char with 0
	je	_exit_zero
	cmp	BYTE[rdi], sil	; sil are the last 8 bit from rsi
	je	_end_ok
	inc	rdi
	jmp	_loop
	
_end_ok:
	mov	rax, rdi
	call	_end
	ret

_end:
	mov	rsp, rbp	; restore stack
	pop	rbp
	ret

_exit_zero:
	mov	rax, 0
	call	_end
	ret
