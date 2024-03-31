int ft_atoi(char *str)
{
    int i;
    int sign;
    int number;

    i = 0;
    sign = 1;
    number = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        sign = -sign;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        number = number * 10 + (str[i] - '0');
        i++;
    }
    return (number * sign);
}

/*
#include <stdio.h>
int main(int ac, char **av)
{
    if (ac == 2)
    {
        printf ("l'entier entre en parametre est %d\n", ft_atoi(av[1]));
    }
    return (0);
}
*/