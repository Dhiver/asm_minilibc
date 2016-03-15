[BITS 64]
section .text
	global strcmp:function

strcmp:
	push	rbp		; saving stack
	mov	rbp, rsp

_loop:
	cmp	BYTE[rdi], 0
	je	_end
	cmp	BYTE[rdi], sil
	jne	_end
	inc	rdi
	jmp	_loop

_end:
	xor	rax, rax
	mov	al, [rdi]
	xor	rbx, rbx
	mov  	bl, [rsi]
	sub	rax, rbx

	mov	rsp, rbp	; restore stack
	pop	rbp
	ret
