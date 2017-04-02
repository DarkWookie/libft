/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 17:02:43 by rgroscla          #+#    #+#             */
/*   Updated: 2017/01/21 17:53:50 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*buf;
	size_t	i;

	i = 0;
	if (!(buf = (char *)malloc(size)))
		return (NULL);
	while (i <= size)
		buf[i++] = 0;
	return ((void *)buf);
}
