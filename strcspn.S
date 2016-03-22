[BITS 64]

section .text
	global	strcspn:function

strcspn:
	push	rbp
	mov	rbp, rsp
	cmp	rdi, 0
	je	_not_found
	xor	rcx, rcx
	xor	rax, rax
	jmp	_loop

_little_one:
	xor	r8, r8
_start:
	cmp	BYTE[rsi + r8], 0
	je	_again
	cmp	BYTE[rsi + r8], al
	je	_found
	inc	r8
	jmp	_start

_loop:
	cmp	BYTE[rdi + rcx], 0
	je	_not_found
	mov	al, BYTE[rdi + rcx]
	jmp	_little_one
_again:
	inc	rcx
	jmp	_loop

_found:
	mov	rax, rcx
	jmp	_end
_not_found:
	xor	rax, rax
_end:
	mov	rsp, rbp
	pop	rbp
	ret
