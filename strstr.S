[BITS 64]

section	.text
	global	strstr:function

strstr:
	push	rbp		; saving stack
	mov	rbp, rsp

	xor	rcx, rcx
_loop:

_restore_stack:
	mov	rsp, rbp	; restore stack
	pop	rbp
	ret

