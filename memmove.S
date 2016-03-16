[BITS 64]

section	.text
	global	memmove:function
	extern	memcpy

memmove:
	push	rbp
	mov	rbp, rsp

	push	rdi
	cmp	rdx, 0		; if third arg is 0 -> do nothing
	je	_end

	cmp	rdi, rsi
	jle	_call_memcpy
	xor	rbx, rbx
	add	rdi, rdx
	add	rsi, rdx
_loop:
	cmp	rdx, 0
	je	_end
	dec	rdi
	dec	rsi
	mov	bl, BYTE[rsi]
	mov	BYTE[rdi], bl
	dec	rdx
	jmp	_loop

_call_memcpy:
	pop     rdi
	call	memcpy		wrt ..plt
	jmp     _restore_stack

_end:
	pop	rax

_restore_stack:
	mov	rsp, rbp
	pop	rbp
        ret
