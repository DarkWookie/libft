/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 15:10:37 by rgroscla          #+#    #+#             */
/*   Updated: 2017/03/13 15:17:49 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIST_H
# define LIST_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef		struct	s_list
{
	void		*content;
	size_t		content_size;
	struct		s_list *next;
}				t_list;

/*
content : La donnée contenue dans le maillon. Le void * permet de stocker une
donnée de n’importe quel type.
content_size : La taille de la donnée stockée. Le type void * ne permettant pas
de connaitre la taille de la donnée pointée, il est nécessaire d’en sauvegarder la
taille. Par exemple la chaine de caractères "42" a une taille de 3 octets et l’entier
32bits 42 a une taille de 4 octets.
next : L’adresse du maillon suivant de la liste ou NULL si le maillon est le dernier.
*/

t_list	*ft_lstnew(void const *content, size_t content_size);

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));

void	ft_lstadd(t_list **alst, t_list *new);

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));

t_list	*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem));

#endif