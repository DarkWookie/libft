/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 18:35:31 by rgroscla          #+#    #+#             */
/*   Updated: 2017/01/24 19:15:18 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	start = i;
	end = i;
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			end = i;
		i++;
	}
	return (ft_strsub(s, (unsigned int)start, end - start + 1));
}
