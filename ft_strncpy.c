/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 00:48:10 by rgroscla          #+#    #+#             */
/*   Updated: 2017/01/19 16:05:54 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	length;

	i = 0;
	length = len;
	if (!(dst = (char *)malloc(len)))
		return (NULL);
	while (src[i] != '\0' || len > 0)
	{
		dst[i] = src[i];
		len--;
		i++;
	}
	if (i < length)
	{
		while (i++ < len)
			dst[i] = '\0';
	}
	return (dst);
}
