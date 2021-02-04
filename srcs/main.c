/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 18:01:45 by rcabezas          #+#    #+#             */
/*   Updated: 2021/02/04 11:48:00 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libasm.h"
#include <string.h>

int main(void)
{
    void *s = NULL;
    int c;
    int b;

    c = ft_read(1, s, 4);
    write(1, "\n", 1);
    b = read(1, s, 4);
    write(1, "\n", 1);
    printf("RETURN: %d\n", c);
    printf("RETURN Original: %d\n", b);
    return (0);
}
