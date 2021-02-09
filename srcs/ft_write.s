section .text
	global _ft_write
	extern ___error

_ft_write:
	mov r8, rdx
	mov rax, 0x2000004
    syscall
	jc exit_error
	jmp exit

exit_error :
	push rax
	call ___error
	mov rdx, rax
	pop rax
	mov [rdx], rax
	mov rax, -1
	ret

exit:
	mov rax, r8
	ret