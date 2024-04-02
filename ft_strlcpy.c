/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 22:34:24 by ibaby             #+#    #+#             */
/*   Updated: 2024/03/31 22:34:24 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlcpy(const char *src, char *dst, size_t size)
{
    int i;
    int retval;

    i = 0;
    while (src[i])
        i++;
    retval = i;
    i = 0;
    if (retval >= (int)size)
        return -1;
    while (i < (int)size)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (retval);
}