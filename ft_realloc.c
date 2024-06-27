/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 02:14:13 by ibaby             #+#    #+#             */
/*   Updated: 2024/06/27 02:19:07 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *buffer, int buffer_size, size_t size, size_t sizeof_type)
{
	unsigned char	*ptr;

	ptr = ft_calloc(size, sizeof_type);
	ft_memcpy(ptr, buffer, buffer_size * sizeof_type);
	ft_free(&buffer);
	return (ptr);
}
