[BITS 64]
section .text
	global	strlen:function

strlen:
	push	rbp			; saving stack
	mov	rbp, rsp

	mov	rcx, 0			; init counter register
_loop:
	cmp	BYTE[rdi], 0		; compare with 0
	je	_end			; if this is 0 -> end
	inc	rdi			; go to next character
	inc	rcx			; increment counter
	jmp	_loop			; call _loop again

_end:
	mov	rax, rcx		; Set return value
	mov	rsp, rbp		; restore stack
	pop	rbp
	ret				; return value
