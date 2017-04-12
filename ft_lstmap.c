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
	t_list	*previous;
	t_list	*current;
	t_list	*new;

	new = NULL;
	if (lst && f)
	{
		current = f(lst);
		lst = lst->next;
		new = current;
		if (new)
		{
			while (lst)
			{
				previous = current;
				current = f(lst);
				if (!current)
					return (NULL);
				previous->next = current;
				lst = lst->next;
			}
			current->next = 0;
		}
	}
	return (new);
}
