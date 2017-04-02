/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 18:06:19 by rgroscla          #+#    #+#             */
/*   Updated: 2017/03/29 20:45:52 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	b;

	b = (char)c;
	while (*s)
	{
		if (*s == b)
			return ((char *)s);
		s++;
	}
	if (b == '\0')
		return ((char *)s);
	return (NULL);
}
