/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 18:01:45 by rcabezas          #+#    #+#             */
/*   Updated: 2021/02/04 13:08:15 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libasm.h"
#include <string.h>

int main(void)
{
    const char *s = "hola";
//    const char *x = "hola";
//    int y;
//    int z;
    char *a;
    char *b;

    a = ft_strdup(s);
    b = strdup(s);
    printf("RETURN : %s\n", a);
    printf("ORIGINAL : %s\n", b);
    /*y = ft_strcmp(s, x);
    z = strcmp(s, x);
    printf("RETURN : %d\n", y);
    printf("ORIGINAL : %d\n", z);*/
}
