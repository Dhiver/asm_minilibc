[BITS 64]

section	.text
	global	strncmp:function

strncmp:
	push	rbp
	mov	rbp, rsp
	xor	rcx, rcx
	xor	rax, rax
	cmp	rdi, rsi
	je	_restore_stack

_loop:
	cmp	BYTE[rdi + rcx], 0
	jmp	_end
	cmp	BYTE[rsi + rcx], 0
	jmp	_end
	cmp	BYTE[rdi], sil
	jne	_end
	inc	rcx
	cmp	rcx, rdx
	je	_end
	jmp	_loop

_end:
	mov	al, BYTE[rdi + rcx]
	sub	al, BYTE[rsi + rcx]
_restore_stack:
	mov	rsp, rbp
	pop	rbp
	ret
