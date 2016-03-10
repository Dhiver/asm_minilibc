[BITS 64]

section	.text
	global memcpy:function

memcpy:

	push	rbp
	mov	rbp, rsp

	push	rdi
_loop:
	cmp	BYTE[rsi], 0
	je	_end
	mov	BYTE[rdi], sil
	inc	rsi
	inc	rdi
	jmp	_loop
_end:
	inc	rsi
	mov	BYTE[rsi], 0
	pop	rdi
	mov	rax, rdi

	mov	rsp, rbp
	pop	rbp
	ret


