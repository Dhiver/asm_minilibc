[BITS 64]

section	.text
	global	strstr:function

strstr:
	push	rbp		; saving stack
	mov	rbp, rsp

	xor	rcx, rcx
	xor	rax, rax
	cmp	rdi, 0
	je	_not_found
	jmp	_loop

_small_loop:
	mov	r8, rcx			; haystack counter
	mov	r9, rsi			; sav rsi
	inc	rcx
	inc	rsi
_loop_in:
	cmp	BYTE[rdi + rcx], 0
	jmp	_found
	cmp	BYTE[rsi], 0
	je	_found
	mov	al, BYTE[rsi]
	cmp	BYTE[rdi + rcx], al
	jne	_loop_again
	inc	rcx
	inc	rsi
	jmp	_loop_in

_loop_again:
	mov	rcx, r8
	mov	rsi, r9
	inc	rcx
_loop:
	mov	al, BYTE[rsi]
	cmp	BYTE[rdi + rcx], al
	je	_small_loop
	cmp	BYTE[rdi + rcx], 0
	je	_not_found
	inc	rcx
	jmp	_loop

_found:
	mov	rax, rdi
	add	rax, r8
	jmp	_restore_stack
_not_found:
	xor	rax, rax
_restore_stack:
	mov	rsp, rbp	; restore stack
	pop	rbp
	ret

