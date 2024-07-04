/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 22:20:39 by ibaby             #+#    #+#             */
/*   Updated: 2024/07/01 15:30:12 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

#ifndef MAX_FD
# define MAX_FD 20
#endif

char	*get_next_line(int fd)
{
	char		*buffer;
	static char	save[MAX_FD][BUFFER_SIZE + 1];
	char		*str;
	int			byte_read;

	if (fd < 0 || fd >= MAX_FD || BUFFER_SIZE <= 0)
		return (NULL);
	free((byte_read = 1, str = ft_strdup(save[fd]), NULL));
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!str || !buffer)
		return (free(buffer), free(str), NULL);
	while (is_nl(str) == 0 && byte_read > 0)
	{
		byte_read = read(fd, buffer, BUFFER_SIZE);
		if (byte_read < 0)
			return (ft_clean(save[fd]), free(buffer), free(str), NULL);
		buffer[byte_read] = '\0';
		str = ft_re_strjoin(str, buffer);
		if (!str)
			return (free(buffer), NULL);
	}
	free((after_line(str, save[fd]), str = re_before_line(str), NULL));
	if (!str[0])
		ft_free((void **)&str);
	return (free(buffer), str);
}

void	ft_clean(char *save)
{
	size_t	i;

	i = 0;
	if (!*save)
		return ;
	while (save[i] != '\n' && save[i])
	{
		save[i] = '\0';
		i++;
	}
	ft_strlcpy(save, save + i + 1, BUFFER_SIZE + 1);
}

void	after_line(char *str, char *save)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i] != '\n' && str[i])
		i++;
	if (str[i] == '\n')
		i++;
	else
	{
		*save = '\0';
		return ;
	}
	ft_strlcpy(save, str + i, BUFFER_SIZE + 1);
}

char	*re_before_line(char *all)
{
	int		i;
	char	*dest;
	int		test;

	i = 0;
	if (!all)
		return (free(all), NULL);
	while (all[i] != '\n' && all[i])
		i++;
	if (all[i] == '\n')
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (free(all), NULL);
	test = i;
	while (i >= 0)
	{
		dest[i] = all[i];
		i--;
	}
	dest[test] = '\0';
	return (free(all), dest);
}
