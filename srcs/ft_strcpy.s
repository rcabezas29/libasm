section .text
	global _ft_strcpy

_ft_strcpy :
    mov rcx, 0

_copy :
    cmp BYTE [rsi+rcx], 0
    je _fin
    mov dl, BYTE [rsi+rcx]
    mov BYTE [rdi+rcx], dl
    inc rcx
    jmp _copy

_fin :
    mov [rdi + rcx], BYTE 0
    mov rax, rdi
    ret