section .text
    global _ft_strdup
    extern _malloc
    extern _ft_strlen
    extern _ft_strcpy

_ft_strdup :
    call _ft_strlen
    inc rax
    push rdi
    mov rdi, rax
    call _malloc
    pop rsi
    mov rdi, rax
    call _ft_strcpy
    mov rax, rdi
    ret
