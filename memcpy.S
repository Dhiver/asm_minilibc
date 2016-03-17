[BITS 64]

section	.text
	global memcpy:function

memcpy:

	push	rbp
	mov	rbp, rsp

	push	rdi
_loop:
	cmp	rdx, 0
	je	_end
	cmp	rdi, rsi
	je	_end
	mov	bl, BYTE[rsi]
	mov	BYTE[rdi], bl
	inc	rsi
	inc	rdi
	dec	rdx
	jmp	_loop
_end:
	pop	rax
	mov	rsp, rbp
	pop	rbp
	ret


