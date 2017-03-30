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
	char	*bigg;
	char	*litt;

	litt = NULL;
	bigg = (char *)big;
	if (!little)
		return (bigg);
	while (*big)
	{
		bigg = (char *)big;
		while (*big && *litt && *big == *litt && len)
		{
			big++;
			litt++;
			len--;
		}
		if (len == 0)
			return (litt);
		big++;
	}
	return (NULL);
}
