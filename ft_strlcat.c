/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 17:59:38 by rgroscla          #+#    #+#             */
/*   Updated: 2017/03/30 17:59:40 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i;
	char	*tmp;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	i = 0;
	tmp = dst;
	if (!(tmp = (char *)malloc(len_src + len_dst + 1)))
		return (0);
	if (size == 0)
		return (len_src);
	else if (size > len_src)
		return (len_dst + len_src);
	while (i < size && src[i] != '\0')
	{
		tmp[len_dst + i] = src[i];
		
		i++;
	}
	tmp[len_dst + i] = '\0';
	return (len_src + size);
}
