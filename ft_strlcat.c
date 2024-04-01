/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 22:34:22 by ibaby             #+#    #+#             */
/*   Updated: 2024/03/31 22:34:22 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    while (dst[i] != '\0' && i <= size)
        i++;
    while (src[j])
    {
        dst[i++] = src[j++];
    }
    dst[i] = '\0';
    return (i);
}