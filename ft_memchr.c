/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 02:30:36 by rgroscla          #+#    #+#             */
/*   Updated: 2017/01/19 16:06:07 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	u;
	unsigned char	*d;

	u = (unsigned char)c;
	z = (unsigned char *)s;
	while (*z || n--)
	{
		if (*z == u)
			return ((void *)z);
		z++;
	}
	return (NULL);
}
