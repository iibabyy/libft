#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list  *last;

    if (!lst)
        return (last = NULL);
    last = lst->next;
    while (last->next)
    {
        last = last->next;
    }
    return (last);
}