#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int i;
	t_list *count;

	i = 1;
	if (!lst)
		return (0);
	count = lst->next;
	while (count)
	{
		count = count->next;
		i++;
	}
	return (i);
}