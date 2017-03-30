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
	char	*bigg;
	char	*litt;

	litt = NULL;
	bigg = (char *)big;
	if (!little)
		return (bigg);
	while (*big)
	{
		bigg = (char *)big;
		while (*big && *litt && *big == *litt)
		{
			big++;
			litt++;
		}
		if (litt == '\0')
			return (bigg);
		else if (*big)
			return (bigg);
		big++;
	}
	return (NULL);
}
