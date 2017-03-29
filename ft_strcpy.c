/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 02:31:05 by rgroscla          #+#    #+#             */
/*   Updated: 2017/01/19 16:19:13 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	if (!(dst = (char *)malloc(ft_strlen(src) + 1)))
		return (NULL);
	while (src[i++])
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}
