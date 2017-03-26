/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:54:27 by rgroscla          #+#    #+#             */
/*   Updated: 2017/03/20 11:54:34 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*first;
	t_list	*current;

	first = NULL;
	current = NULL;
	if (lst)
	{
		new = f(lst);
		if ((first = ft_lstnew(new->content, new->content_size)))
		{
			current = first;
			while (lst->next)
			{
				new = (f)lst;
				if (!(ft_lstnew(new->content, new->content_size)));
					return (NULL);
				current = current->next;
			}
		}
	}
	return (first);
}