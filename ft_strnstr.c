/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 23:04:55 by marvin            #+#    #+#             */
/*   Updated: 2024/03/29 23:04:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strnstr(char *big, char *little, int n)
{
    int     i;
    int     j;
    int     count;
    char    *retval;

    i = 0;
    j = 0;
    if (ft_strlen(little) == 0 || !little)
        return (big);
    while (big[i] && i < n)
    {
        if (big[i] == little[j])
        {
            while (big[i + j] == little[j] && big[i + j] && little[j] && i + j < n)
            { 
                if (j + 1 == ft_strlen(little))
                    return (retval = &big[i], retval);
                j++;
            }
            j = 0;
        }
        i++;
    }
    return (retval = 0);
}

/*int main(int ac, char **av)
{
    if (ac == 1)
    {
        printf ("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "", 10));
    }
}*/

/*#include <unistd.h>

static void		ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void		check_strnstr(char *big, char *little, int len)
{
	const char *str;

	if (!(str = ft_strnstr(big, little, len)))
		ft_print_result("NULL");
	else
		ft_print_result(str);
}

int				main(int argc, const char *argv[])
{
	int			arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		check_strnstr("lorem ipsum dolor sit amet", "lorem", 15);
	else if (arg == 2)
		check_strnstr("lorem ipsum dolor sit amet", "ipsum", 15);
	else if (arg == 3)
		check_strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35);
	else if (arg == 4)
		check_strnstr("lorem ipsum dolor sit amet", "", 10);
	else if (arg == 5)
		check_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30);
	else if (arg == 6)
		check_strnstr("lorem ipsum dolor sit amet", "dol", 30);
	else if (arg == 7)
		check_strnstr("lorem ipsum dolor sit amet", "consectetur", 30);
	else if (arg == 8)
		check_strnstr("lorem ipsum dolor sit amet", "sit", 10);
	else if (arg == 9)
		check_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
	else if (arg == 10)
		check_strnstr("lorem ipsum dolor sit amet", "dolor", 0);
	return (0);
}*/