[BITS 64]

section	.text
	global	rindex:function
	extern	strlen

rindex:
	push	rbp
	mov	rbp, rsp

	push	rdi
	call	strlen		wrt ..plt
	mov	rcx, rax	; move strlen return in counter
	pop	rdi
_loop:
	cmp	rcx, -1
	je	_end_not_found
	cmp	BYTE[rdi + rcx], sil
	je	_end_found
	dec	rcx
	jmp	_loop

_end_found:
	mov	rax, rdi
	add	rax, rcx
	jmp	_restore_stack

_end_not_found:
	mov	rax, 0
_restore_stack:
	mov	rsp, rbp
	pop	rbp
        ret
