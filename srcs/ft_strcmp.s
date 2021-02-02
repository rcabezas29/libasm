section .text
	global _ft_strcmp

_ft_strcmp :
    mov rcx, -1

_loop :
    inc rcx
    mov dl, BYTE [rdi+rcx]
    cmp dl, 0
    je _exit
    mov cl, BYTE [rsi+rcx]
    cmp cl, 0
    je _exit
    cmp dl, cl
    jne _exit
    jmp _loop

_exit :
    mov al, dl
    sub al, cl
    ret