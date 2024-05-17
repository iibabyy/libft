#include "libft.h"
#include <stdlib.h>

static int	count_words(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] == c)
				i++;
		}
		i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count);
}

char	**ft_split(const char *s, char sep)
{
	int		start;
	int		i;
	int		j;
	char	**split;

	i = 0;
	j = 0;
	while (s[i] == sep)
		i++;
	split = malloc(sizeof(char *) * (count_words(s, sep) + 1));
	while (j < count_words(s, sep))
	{
		start = i;
		while (s[i] != sep && s[i])
			i++;
		split[j] = malloc(sizeof(char) * (i - start + 1));
		ft_memmove(split[j], (s + start), (i - start));
		split[j][i - start] = '\0';
		while (s[i] == sep)
			i++;
		j++;
	}
	return (split[count_words(s, sep)] = NULL, split);
}

/*
#include <stdio.h>
#include <unistd.h>

static void	ft_print_result(char const *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void	ft_print_tabstr(char **tabstr)
{
	int	i;

	i = 0;
	while (tabstr[i] != NULL)
	{
		ft_print_result(tabstr[i]);
		if (tabstr[i + 1])
			write(1, "\n", 1);
		free(tabstr[i]);
		i++;
	}
	free(tabstr);
}

static void	check_split(char *s, char c)
{
	char	**tabstr;

	if (!(tabstr = ft_split(s, c)))
		ft_print_result("NULL");
	else
		ft_print_tabstr(tabstr);
}

int	main(int argc, const char *argv[])
{
	int	arg;

	alarm(5);
	if (argc == 1)
		return (0);
	if ((arg = atoi(argv[1])) == 1)
		check_split("          ", ' ');
	else if (arg == 2)
		check_split("lorem ipsum dolor sit amet,
			consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	else if (arg == 3)
	{
		check_split("   lorem   ipsum dolor     sit amet,
			consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	}
	else if (arg == 4)
		check_split("lorem ipsum dolor sit amet,
			consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor,
			dignissim sit amet, adipiscing nec, ultricies sed,
			dolor. Cras elementum ultricies diam. Maecenas ligula massa,
			varius a, semper congue, euismod non, mi.", 'i');
	else if (arg == 5)
		check_split("lorem ipsum dolor sit amet,
			consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor,
			dignissim sit amet, adipiscing nec, ultricies sed,
			dolor. Cras elementum ultricies diam. Maecenas ligula massa,
			varius a, semper congue, euismod non, mi.", 'z');
	return (0);
}
*/