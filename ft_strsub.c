/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 18:02:16 by rgroscla          #+#    #+#             */
/*   Updated: 2017/01/24 18:19:30 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ret;

	if (!(ret = (char *)malloc(len + 1)) || !s)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ret[i] = s[(size_t)start + i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
