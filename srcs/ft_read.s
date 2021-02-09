section .text
	global _ft_read
    extern ___error

_ft_read :
    mov rax, 0x2000003
    syscall
    jc _exit_error
    jmp _exit

_exit_error :
    push rax
	call ___error
	mov rdx, rax
	pop rax
	mov [rdx], rax
    mov rax, -1
	ret
    
_exit :
    ret