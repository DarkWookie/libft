/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 02:30:57 by rgroscla          #+#    #+#             */
/*   Updated: 2017/03/29 20:07:14 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	char	*buffer;
	int		i;
	int		j;

	i = 0;
	j = len;
	if (!(buffer = (char *)malloc(len)))
		return (NULL);
	d = (char *)dst;
	s = (char *)src;
	while (len--)
		buffer[i++] = *s++;
	i = 0;
	while (j--)
		*d++ = buffer[i++];
	free(buffer);
	return (dst);
}
