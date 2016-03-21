[BITS 64]

section .text
	global	strcasecmp:function

strcasecmp:
	push	rbp		; saving stack
	mov	rbp, rsp

	xor	rcx, rcx
	xor	rax, rax
	xor	rbx, rbx
	jmp	_reduce

_lower_al:
	add	al, 32
	jmp	_second
	ret

_lower_bl:
	add	bl, 32
	jmp	_diff

_reduce:
	mov	al, BYTE[rdi + rcx]
	mov	bl, BYTE[rsi + rcx]
	cmp	al, 65			; Is less than 'A' ?
	jl	_second
	cmp	al, 90			; Is less than 'Z' ?
	jle	_lower_al

_second:
	cmp	bl, 65			; Is less than 'A' ?
	jl	_diff
	cmp	bl, 90			; Is less than 'Z' ?
	jle	_lower_bl

_diff:
	cmp	al, bl
	jne	_end
	cmp	al, 0
	je	_end
	cmp	bl, 0
	je	_end
	inc	rcx
	jmp	_reduce

_end:
	sub	rax, rbx
	mov	rsp, rbp	; restore stack
	pop	rbp
	ret
