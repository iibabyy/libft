#include "libft.h"

void *ft_memcpy(void *dest, const void *src, int n)
{
    int                 i;
    unsigned const char *s;

    i = 0;
    s = src;
    while (n--)
    {
        ft_memset((dest + i), *(s + i), 1);
        i++;
    }
    return (dest);
}

/*
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

static void		check_memcpy(void *dest, void *src, int n)
{
	if (dest != ft_memcpy(dest, src, n))
		write(1, "dest's adress was not returned\n", 31);
	write(1, dest, 30);
	free(dest);
}

int				main(int argc, const char *argv[])
{
	void	*mem;
	int		arg;

	alarm(5);
	if (!(mem = malloc(sizeof(*mem) * 30)) || argc == 1)
		return (0);
	memset(mem, 'j', 30);
	if ((arg = atoi(argv[1])) == 1)
		check_memcpy(mem, "zyxwvutsrqponmlkjihgfedcba", 14);
	else if (arg == 2)
		check_memcpy(mem, "zyxwvutst", 0);
	else if (arg == 3)
		check_memcpy(mem, "zy\0xw\0vu\0\0tsr", 11);
	return (0);
}
*/