#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	while (alst->content)
{
	size_t	i;
	t_list	*elem;
	t_list	*next_el;

	elem = *alst;
	while (elem)
	{
		next_el = elem->next;
		del(elem->content, elem->content_size);
		free(elem);
		elem = next_el;
	}
	*alst = NULL;
}
