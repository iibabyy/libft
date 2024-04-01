/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 22:33:17 by ibaby             #+#    #+#             */
/*   Updated: 2024/03/31 22:33:17 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strtrim(const char *s1, const char *set)
{
    int     start;
    int     end;
    int     i;
    char    *str;

    i = 0;
    start = 0;
    end = (ft_strlen((char *)s1) > 0)? ft_strlen((char *)s1) - 1: ft_strlen((char *)s1);
    while (ft_strchr(set, s1[start]) && i++ < ft_strlen((char *)s1))
        start++;
    i = 0;
    while (ft_strchr(set, s1[end]) && i++ < ft_strlen((char *)s1))
        end--;
    if(!(str = malloc (sizeof(char) * (end - start +1))))
		return (0);
    str = ft_memmove(str, (s1 + start), (end - start + 1));
}

/*
#include <unistd.h>

static void		ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void		check_strtrim(char *s1, char *set)
{
	char	*strtrim;

	if (!(strtrim = ft_strtrim(s1, set)))
		ft_print_result("NULL");
	else
		ft_print_result(strtrim);
	if (strtrim == s1)
		ft_print_result("\nA new string was not returned");
	else
		free(strtrim);
}

int				main(int argc, const char *argv[])
{
	char	set [] = "\t \n";
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
		check_strtrim(s1, set);
	}
	else if (arg == 2)
	{
		char s1[] = "lorem ipsum dolor sit amet \n \t ";
		check_strtrim(s1, set);
	}
	else if (arg == 3)
	{
		char s1[] = " \n \t lorem ipsum dolor sit amet";
		check_strtrim(s1, set);
	}
	else if (arg == 4)
	{
		char s1[] = "  \n  \t  lorem \n ipsum \t dolor \n sit \t amet  \t \n ";
		check_strtrim(s1, set);
	}
	else if (arg == 5)
	{
		char s1[] = "          ";
		check_strtrim(s1, set);
	}
	return (0);
}
*/