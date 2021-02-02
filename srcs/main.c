/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 18:01:45 by rcabezas          #+#    #+#             */
/*   Updated: 2021/02/02 13:55:33 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libasm.h"
#include <string.h>

int main(void)
{
    const char *s = "Hola";
    const char *a = "Hola";
    int c;
    int b;

    c = ft_strcmp(a, s);
    b = strcmp(a, s);
    printf("RETURN: %d\n", c);
    printf("RETURN Original: %d\n", b);
    return (0);
}
