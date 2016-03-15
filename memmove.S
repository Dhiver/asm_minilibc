[BITS 64]

section	.text
	global	memmove:function
	extern	memcpy

memmove:
	push	rbp
	mov	rbp, rsp

	push	rdi
	cmp	rdx, 0
	je	_end

	cmp	rsi, rdi
	jle	_call_memcpy
	xor	rbx, rbx
	add	rdi, rdx
	add	rsi, rdx
_loop:
	cmp	rdx, 0
	jmp	_end
	dec	rdi
	dec	rsi
	mov	bl, BYTE[rdi]
	mov	sil, bl
	dec	rdx

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
