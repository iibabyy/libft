char    *ft_strchr(const char *str, int c)
{
    int     i;
    int     save;
    char    *retval;

    i = 0;
    while (str[i] && str[i++] != c)
    if (str[i] == '\0')
        return (retval = 0);
    retval = (char *)str + i;
    return (retval);
}

/*
#include <stdio.h>
int main(int ac, char **av)
{
    if (ac == 2)
    {
        printf ("%s\n%s\n", av[1], ft_strchr(av[1], 'r'));
    }
    return (0);
}
*/