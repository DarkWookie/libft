/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 17:56:33 by rgroscla          #+#    #+#             */
/*   Updated: 2017/03/30 18:00:19 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
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
