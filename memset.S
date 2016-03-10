[BITS 64]

section .text
	global	memset:function

memset:
	push	rbp
	mov	rbp, rsp

	push	rdi
_loop:
	cmp	dl, 0
	je	_end
	mov	BYTE[rdi], sil
	dec	dl
	inc	rdi
	jmp	_loop

_end:
	pop	rdi
	mov	rax, rdi
	mov	rsp, rbp
	pop	rbp
	ret
