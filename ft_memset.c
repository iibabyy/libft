#include "libft.h"

void    *ft_memset(void *array, int value, int hmany)
{
    int     i;
    unsigned char   *tab;

    i = 0;
    tab = array;
    while (hmany--)
    {
        *tab++ = value;
    }
    return (array);
}
/*
#include <stdio.h>
#include <unistd.h>
int main(int ac, char **av)
{
    if (ac = 4)
    {
        int     i;
        char    *s;

        i = 0;
        printf ("%s\n", av[1]);
        s = ft_memset(av[1], av[2][0], ft_atoi(av[3]));
        while (s[i])
            write (1, &s[i++], 1);
    }
    return (0);
}
*/
/*
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

static void		check_memset(void *mem, int c, int n, int mem_size)
{
	if (mem != ft_memset(mem, c, n))
		write(1, "mem's adress was not returned\n", 30);
	write(1, mem, mem_size);
	free(mem);
}

int				main(int argc, const char *argv[])
{
	void	*mem;
	int		arg;
	int		mem_size;

	alarm(5);
	mem_size = 15;
	if (!(mem = malloc(sizeof(*mem) * mem_size)) || argc == 1)
		return (0);
	memset(mem, 'j', mem_size);
	if ((arg = atoi(argv[1])) == 1)
		check_memset(mem, 'c', 5, mem_size);
	else if (arg == 2)
		check_memset(mem, 'c', 14, mem_size);
	else if (arg == 3)
		check_memset(mem, '\n', 6, mem_size);
	else if (arg == 4)
		check_memset(mem, '\0', 1, mem_size);
	return (0);
}
*/