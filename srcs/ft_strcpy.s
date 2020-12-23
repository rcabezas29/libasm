section .text
	global _ft_strcpy
    extern _ft_strlen

_ft_strcpy:
    push rdi
    mov rdi, rsi
    call _ft_strlen
    mov rcx, rax
    mov rax, 0

_loop_start:
    cmp rax, rcx
    jl _loop
    jge exit

_loop:
    mov BYTE [rsi + rax], BYTE [rdi + rax]
    inc rax
    jmp _loop_start

exit:
    ret
