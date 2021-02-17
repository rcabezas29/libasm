/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 18:01:45 by rcabezas          #+#    #+#             */
/*   Updated: 2021/02/17 11:13:14 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libasm.h"

int check_strlen()
{
    char *a = "hola";
    char *b = "";
    char *c = "Hola que tal";
    char *d = "\n";
    char *e = "fsdfwefssffdfwesdaxccbzdfnsddgsrbzdfbaerbzdbdrbzbaerb<sfbtbstdhsvarRAVSR";

    printf("\033[0;32m");
    printf("---------------\n");
    printf("---FT_STRLEN---\n");
    printf("---------------\n\n");
    printf("\033[0m");
    printf("EXPECTED RET: %zu\n", strlen(a));
    printf("ACTUAL RET: %zu\n", ft_strlen(a));
    printf("----------------------\n");
    printf("EXPECTED RET: %zu\n", strlen(b));
    printf("ACTUAL RET: %zu\n", ft_strlen(b));
    printf("----------------------\n");
    printf("EXPECTED RET: %zu\n", strlen(c));
    printf("ACTUAL RET: %zu\n", ft_strlen(c));
    printf("----------------------\n");
    printf("EXPECTED RET: %zu\n", strlen(d));
    printf("ACTUAL RET: %zu\n", ft_strlen(d));
    printf("----------------------\n");
    printf("EXPECTED RET: %zu\n", strlen(e));
    printf("ACTUAL RET: %zu\n", ft_strlen(e));
    printf("----------------------\n\n");
    return (0);
}

int check_strcpy()
{
    char *a = "hola";
    char buff[40];
    char *ret;

    printf("\033[0;32m");
    printf("---------------\n");
    printf("---FT_STRCPY---\n");
    printf("---------------\n\n");
    printf("\033[0m");
    ret = strcpy(buff, a);
    printf("EXPECTED RET: %s\n", ret);
    printf("EXPECTED DEST: %s\n", buff);
    printf("\n");
    ret = ft_strcpy(buff, a);
    printf("ACTUAL RET: %s\n", ret);
    printf("ACTUAL DEST: %s\n", buff);
    printf("----------------------\n");
    a = "";
    ret = strcpy(buff, a);
    printf("EXPECTED RET: %s\n", ret);
    printf("EXPECTED DEST: %s\n", buff);
    printf("\n");
    ret = ft_strcpy(buff, a);
    printf("ACTUAL RET: %s\n", ret);
    printf("ACTUAL DEST: %s\n", buff);
    printf("----------------------\n\n");
    return (0);
}

int check_strcmp()
{
    char *a = "hola";
    char *b = "";
    char *c = "Hola que tal";
    char *d = "hola.";
    char *e = "hoda";

    printf("\033[0;32m");
    printf("---------------\n");
    printf("---FT_STRCMP---\n");
    printf("---------------\n\n");
    printf("\033[0m");
    printf("EXPECTED RET: %d\n", strcmp(b, b));
    printf("ACTUAL RET: %d\n", ft_strcmp(b, b));
    printf("----------------------\n");
    printf("EXPECTED RET: %d\n", strcmp(a, b));
    printf("ACTUAL RET: %d\n", ft_strcmp(a, b));
    printf("----------------------\n");
    printf("EXPECTED RET: %d\n", strcmp(b, a));
    printf("ACTUAL RET: %d\n", ft_strcmp(b, a));
    printf("----------------------\n");
    printf("EXPECTED RET: %d\n", strcmp(c, a));
    printf("ACTUAL RET: %d\n", ft_strcmp(c, a));
    printf("----------------------\n");
    printf("EXPECTED RET: %d\n", strcmp(d, a));
    printf("ACTUAL RET: %d\n", ft_strcmp(d, a));
    printf("----------------------\n");
    printf("EXPECTED RET: %d\n", strcmp(e, a));
    printf("ACTUAL RET: %d\n", ft_strcmp(e, a));
    printf("----------------------\n\n");
    return (0);
}

int check_write()
{
    char *a = "Hola\n";
    int fd;

    errno = 0;
    printf("\033[0;32m");
	printf("---------------\n");
    printf("---FT_WRITE---\n");
    printf("---------------\n\n");
    printf("\033[0m");
	printf("EXPECTED RET: %zd\n", write(1, a, 7));
	printf("ACTUAL RET: %zd\n", ft_write(1, a, 7));
    printf("----------------------\n");
    fd = open("prueba.txt", O_CREAT | O_WRONLY);
	printf("EXPECTED RET: %zd\n", write(fd, "Buenas noches a todos", 22));
	printf("ACTUAL RET: %zd\n", ft_write(fd, "Buenas noches a todos", 22));
    printf("ERRNO: %d\n", errno);
    printf("----------------------\n");
    errno = 0;
	printf("EXPECTED RET: %zd\n", write(-7, NULL, 7));
	printf("ACTUAL RET: %zd\n", ft_write(-7, NULL, 7));
    printf("ERRNO: %d\n", errno);
    printf("----------------------\n\n");
    return (0);
}

int check_read()
{
    char *buff[40];
    int fd;

    errno = 0;
    memset(buff, '\0', sizeof(buff));
    printf("\033[0;32m");
	printf("---------------\n");
    printf("---FT_READ---\n");
    printf("---------------\n\n");
    printf("\033[0m");
	printf("EXPECTED RET: %zd\n", read(1, buff, 40));
	printf("ACTUAL RET: %zd\n", ft_read(1, buff, 40));
    printf("----------------------\n");
    fd = open("prueba_read.txt", O_RDONLY);
	printf("EXPECTED RET: %zd\n", read(fd, buff, 22));
    close(fd);
    fd = open("prueba_read.txt", O_RDONLY);
	printf("ACTUAL RET: %zd\n", ft_read(fd, buff, 22));
    printf("ERRNO: %d\n", errno);
    close(fd);
    errno = 0;
    printf("----------------------\n");
	printf("EXPECTED RET: %zd\n", read(-7, NULL, 40));
	printf("ACTUAL RET: %zd\n", ft_read(-7, NULL, 40));
    printf("ERRNO: %d\n", errno);
    printf("----------------------\n\n");
    return (0);
}

int check_strdup()
{
    char *a = "holaflkgmnmlfkkndkkbdbndlffbnnld";
    char *b = "";
    char *ret;
    char *my_ret;

    ret = strdup(a);
    my_ret = ft_strdup(a);
    printf("\033[0;32m");
    printf("---------------\n");
    printf("---FT_STRDUP---\n");
    printf("---------------\n\n");
    printf("\033[0m");
    printf("EXPECTED RET: %s\n", ret);
    printf("ACTUAL RET: %s\n", my_ret);
    printf("----------------------\n");
    ret = strdup(b);
    my_ret = ft_strdup(b);
    printf("EXPECTED RET: %s\n", ret);
    printf("ACTUAL RET: %s\n", my_ret);
    printf("----------------------\n\n");
    return (0);
}


int main(void)
{
    check_strlen();
    check_strcpy();
    check_strcmp();
    check_write();
    check_read();
    check_strdup();
}
