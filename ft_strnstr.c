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

static int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strnstr(const char *big, const char *little, int n)
{
    int     i;
    int     j;
    int     count;
    char    *retval;

    i = 0;
    j = 0;
    if (!little)
        return (big);
    while (big[i] && i < n)
    {
        if (big[i] == little[j])
        {
            while (big[i + j] == little[j] && big[i + j] && i + j < n)
            { 
                if (j == ft_strlen(little))
                    return (retval = &big[i], retval);
                j++;
            }
            j = 0;
        }
        i++;
    }
    return (*retval = '\0', retval);
}