section .text
	global _ft_strlen

_ft_strlen :
    mov rax, 0

main :
    cmp BYTE [rdi + rax], 0
    jne loop
    je exit

loop :
    inc rax
    jmp main

exit :
    ret