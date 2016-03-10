[BITS 64]
section .text
	global strchr

strchr:
	push	rbp
	mov	rbp, rsp

	mov	bl, BYTE[rdi + 8]
_loop:
	cmp	BYTE[rdi], 0
	je	_end
	cmp	BYTE[rdi], bl
	je	_find
	inc	rdi
	jmp	_loop

_find:	
	mov	rax, rdi
_end:
	mov	rsp, rbp
	pop	rbp
	ret
