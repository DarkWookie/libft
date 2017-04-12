/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 23:58:01 by rgroscla          #+#    #+#             */
/*   Updated: 2017/01/17 00:47:17 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	len;
	size_t	i;
	char	*c;

	len = ft_strlen(src);
	i = 0;
	if (!(c = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (len--)
		c[i++] = *src++;
	c[i] = '\0';
	return (c);
}
