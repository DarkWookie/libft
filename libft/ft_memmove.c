/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 02:30:57 by rgroscla          #+#    #+#             */
/*   Updated: 2017/01/19 16:06:09 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	char	*buffer;
	int		i;

	i = 0;
	buffer = (char *)malloc(n);
	d = (char *)dest;
	s = (char *)src;
	while (*s || len--)
	{
		buffer[i] = *s++;
		*d = buffer[i];
		i++;
	}
	free(buffer);
	return (d);
}
