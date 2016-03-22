[BITS 64]

section	.text
	global	strchr:function

strchr:
	push	rbp		; saving stack
	mov	rbp, rsp

	xor	rcx, rcx
_loop:
	cmp	BYTE[rdi + rcx], sil	; compare with the last 8 bit from rsi
	je	_end_success
	cmp	BYTE[rdi + rcx], 0
	je	_exit_zero
	inc	rcx
	jmp	_loop

_end_success:
	mov	rax, rdi
	add	rax, rcx
	jmp	_restore_stack
_exit_zero:
	xor	rax, rax
_restore_stack:
	mov	rsp, rbp	; restore stack
	pop	rbp
	ret
