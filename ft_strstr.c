/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 18:35:34 by rgroscla          #+#    #+#             */
/*   Updated: 2017/01/19 16:06:05 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (little[0] == '\0')
		return (big);
	while (big[i])
	{
		while (big[i] == little[j] && *big && *little)
		{
			i++;
			j++;
		}
		i++;
	}
	if (j == ft_strlen(little) - 1)
		return (big[i - j]);
	else
		return (NULL);
}
