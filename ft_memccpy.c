/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 02:31:20 by rgroscla          #+#    #+#             */
/*   Updated: 2017/03/29 19:54:48 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*d;
	char			*s;
	unsigned char	u;

	d = (char *)dst;
	s = (char *)src;
	u = (unsigned char)c;
	while (n-- || *s)
	{
		*d++ = *s++;
		if ((unsigned char)*s == u)
			return ((void *)d);
	}
	return (NULL);
}
