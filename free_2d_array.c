/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_2d_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:05:57 by ibaby             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/06/13 21:59:29 by ibaby            ###   ########.fr       */
=======
/*   Updated: 2024/06/11 12:25:39 by ibaby            ###   ########.fr       */
>>>>>>> origin/main
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

<<<<<<< HEAD
void	free_2d_array(void ***NULL_terminated_2d_array)
=======
void	free_2d_array(void **NULL_terminated_2d_array)
>>>>>>> origin/main
{
	int		i;

	i = 0;
<<<<<<< HEAD
	if (!(*NULL_terminated_2d_array))
		return ;
	while ((*NULL_terminated_2d_array)[i])
	{
		free((*NULL_terminated_2d_array)[i]);
		i++;
	}
	free((*NULL_terminated_2d_array));
	(*NULL_terminated_2d_array) = NULL;
=======
	if (!NULL_terminated_2d_array)
		return ;
	while (NULL_terminated_2d_array[i])
	{
		free(NULL_terminated_2d_array[i]);
		i++;
	}
	free(NULL_terminated_2d_array);
>>>>>>> origin/main
}