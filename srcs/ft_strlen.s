# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/17 17:34:57 by rcabezas          #+#    #+#              #
#    Updated: 2020/12/17 18:01:22 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_strlen

_ft_strlen
    mov rax, 0
    cmp BYTE [rdi + rax], 0
    jne loop
    je exit

loop :
    inc rax

exit:
    ret