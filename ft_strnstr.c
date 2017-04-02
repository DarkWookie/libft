/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 21:16:33 by rgroscla          #+#    #+#             */
/*   Updated: 2017/03/30 18:16:37 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	index;
	size_t	size;

	i = 0;
	size = ft_strlen(little);
	if (size == 0)
		return ((char *)big);
	while (big[i] && size + i <= len)
	{
		index = 0;
		while (little[index] == big[index + i])
		{
			if (index == size - 1)
				return ((char *)big + i);
			index++;
		}
		i++;
	}
	return (NULL);
}
