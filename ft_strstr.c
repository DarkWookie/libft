/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 18:35:34 by rgroscla          #+#    #+#             */
/*   Updated: 2017/03/30 18:16:06 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	index;
	size_t	len;

	i = 0;
	len = ft_strlen(little);
	if (len == 0)
		return ((char *)big);
	while (big[i])
	{
		index = 0;
		while (little[index] == big[index + i])
		{
			if (index == len - 1)
				return ((char *)big + i);
			index++;
		}
		i++;
	}
	return (NULL);
}
