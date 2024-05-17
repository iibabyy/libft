#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *elm;
	t_list *tmp;

	elm = *lst;
	while (elm)
	{
		tmp = elm->next;
		ft_lstdelone(elm, del);
		elm = tmp;
	}
	*lst = NULL;
}