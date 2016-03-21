[BITS 64]
section .text
	global	strlen:function

strlen:
	push	rbp			; saving stack
	mov	rbp, rsp

	xor	rcx, rcx		; init counter register
_loop:
	cmp	BYTE[rdi + rcx], 0	; compare with 0
	je	_end			; if this is 0 -> end
	inc	rcx			; increment counter
	jmp	_loop			; call _loop again

_end:
	mov	rax, rcx		; Set return value
	mov	rsp, rbp		; restore stack
	pop	rbp
	ret				; return value
