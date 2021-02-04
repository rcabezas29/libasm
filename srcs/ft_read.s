section .text
	global _ft_read

_ft_read :
    mov rax, 0x2000005
    mov rbx, rdi
    mov rcx, 0
    mov rdx, 0777
    syscall
    jc _exit_error
    mov rax, 0x2000003
    mov rbx, rdi
    mov rcx, rsi
    syscall
    jc _exit_error
    jmp _exit

_exit_error :
    mov rax, -1
    ret

_exit :
    ret