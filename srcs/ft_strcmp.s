section .text
	global _ft_strcmp

_ft_strcmp :
    mov rcx, 0

_loop :
    mov al, BYTE [rdi + rcx]
    cmp al, 0
    je _exit
    mov dl, BYTE [rsi + rcx]
    cmp dl, 0
    je _exit
    cmp al, dl
    jne _exit
    inc rcx
    jmp _loop

_exit :
    movzx rdx, dl
    movzx rax, al
    sub rax, rdx
    ret