[BITS 64]
section .text
	global strcmp:function

strcmp:
	push	rbp		; saving stack
	mov	rbp, rsp

	xor	rcx, rcx
	xor	rax, rax
	xor	rbx, rbx

_loop:
	mov	al, BYTE[rdi + rcx]
	mov	bl, BYTE[rsi + rcx]
	cmp	al, 0
	je	_end
	cmp	bl, 0
	je	_end
	cmp	al, bl
	jne	_end
	inc	rcx
	jmp	_loop

_end:
	sub	rax, rbx
	mov	rsp, rbp	; restore stack
	pop	rbp
	ret
