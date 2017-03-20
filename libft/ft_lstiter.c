#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	while (lst)
	{
		elem = f(elem);
		lst = lst->next;
	}
}
