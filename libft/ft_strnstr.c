/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 21:16:33 by rgroscla          #+#    #+#             */
/*   Updated: 2017/01/18 22:17:37 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return (big);
	while (big[i])
	{
		while (big[i] && little[j] && big[i] == little[i] && len)
		{
			i++;
			j++;
			len--;
		}
		i++;
	}
	if (len == 0)
		return (big[i - len]);
	else
		return (NULL);
}
