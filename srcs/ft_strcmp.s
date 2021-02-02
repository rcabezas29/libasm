section .text
	global _ft_strcmp

_ft_strcmp :
    mov rcx, 0

_loop :
    mov dl, BYTE [rdi+rcx]
    cmp dl, 0
    je _exit
    mov al, BYTE [rsi+rcx]
    cmp al, 0
    je _exit
    cmp al, dl
    jne _exit
    inc rcx
    jmp _loop

_exit :
    movzx rax, al
    movzx rdx, dl
    sub rax, rdx
    ret