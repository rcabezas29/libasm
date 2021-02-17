# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/29 10:34:30 by rcabezas          #+#    #+#              #
#    Updated: 2021/02/17 10:29:25 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRCS_ASM = ft_strlen.s ft_read.s ft_strcmp.s ft_strcpy.s ft_strdup.s ft_write.s

SRCS = $(addprefix srcs/, $(SRCS_ASM))

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.s=.o)

%.o	: %.s
	@nasm -f macho64 $< -o $@

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

all: $(NAME)

try: all
	@gcc -Wall -Wextra -Werror -I. srcs/main.c -L. -lasm -o try_libasm
	@./try_libasm

clean:
	@$(RM) $(OBJS)

fclean:	clean
	@$(RM) $(NAME)
	@$(RM) try_libasm
	@$(RM) prueba.txt

re:		fclean all
