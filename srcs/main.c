/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 18:01:45 by rcabezas          #+#    #+#             */
/*   Updated: 2021/02/04 11:34:47 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libasm.h"
#include <string.h>

int main(void)
{
    const char *s = "Hola";
    int c;
    int b;

    c = ft_write(1, s, 4);
    write(1, "\n", 1);
    b = write(1, s, 4);
    write(1, "\n", 1);
    printf("RETURN: %d\n", c);
    printf("RETURN Original: %d\n", b);
    return (0);
}
