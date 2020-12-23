/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 18:01:45 by rcabezas          #+#    #+#             */
/*   Updated: 2020/12/23 10:49:23 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libasm.h"

int main(void)
{
    char s[4] = "Hola";
    size_t  len;

    len = ft_strlen(s);
    printf("TAMAÑO: %zu", len);
    return (0);
}
