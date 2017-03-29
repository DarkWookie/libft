/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 18:02:16 by rgroscla          #+#    #+#             */
/*   Updated: 2017/03/29 19:09:37 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*d;

	i = 0;
	d = 0;
	if (ft_strlen(s) < (start + len))
	{
		while (s[start] && len--)
		{
			d[i] = s[i];
			i++;
		}
		return (d);
	}
	return (NULL);
}
