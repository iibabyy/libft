#include <stdlib.h>
#include "libft.h"

void    *ft_calloc(int el_count, int el_size)
{
    unsigned char   *buffer;

    buffer = malloc(el_size * el_count);
    if (buffer == 0)
        return (0);
    buffer = ft_memset(buffer, 0, (el_count * el_size));
    return (buffer);
}

/*
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int		main(int argc, const char *argv[])
{
	char	*str;

	alarm(5);
	if (argc != 2)
		return (0);
	else if (atoi(argv[1]) == 1)
	{
		str = (char *)ft_calloc(30, sizeof(char));
		if (!str)
			write(1, "NULL", 4);
		else
			write(1, str, 30);
		free(str);
	}
	return (0);
}
*/