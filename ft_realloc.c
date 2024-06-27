/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 02:14:13 by ibaby             #+#    #+#             */
/*   Updated: 2024/06/27 02:14:30 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *buffer, int buffer_size, int size, int sizeof_type)
{
	unsigned char	*ptr;
	int				i;

	i = 0;
	ptr = malloc(new_size * sizeof_type);
	ft_memcpy(ptr, buffer, new_size * sizeof_type);
	ft_free(buffer);
	return (ptr);
}
