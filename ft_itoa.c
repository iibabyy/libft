/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 12:36:28 by marvin            #+#    #+#             */
/*   Updated: 2024/03/30 12:36:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int  numlen(int num)
{
    int i;

    i = 0;
    while (num)
    {
        num /= 10;
        i++;
    }
    return (i);
}

static void reversetab(char *str)
{
    int     i;
    int     j;
    char    temp;

    i = 0;
    j = ft_strlen(str) - 1;
    while (i < j)
    {
        temp = str[i];
        str[i++] = str[j];
        str[j--] = temp;
    }
}

char    *ft_itoa(int c)
{
    int     i;
    char    *str;

    i = 0;
    str = malloc(sizeof(char) * (numlen(c) + 1));
    while (c)
    {
        str[i++] = c % 10 + '0';
        c /= 10;
    }
    reversetab(str);
    str[i] = '\0';
    return (str);
}

/*
#include <stdio.h>
int main (int ac, char **av)
{
    if (ac == 2)
    {
        printf("il y a %d chiffres dans %d\n", numlen(ft_atoi(av[1])), ft_atoi(av[1]));
        printf("l'entier rentre en parametes est %s\n", ft_itoa(atoi(av[1])));
    }
    return 0;
}
*/