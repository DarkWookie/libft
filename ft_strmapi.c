/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 17:56:25 by rgroscla          #+#    #+#             */
/*   Updated: 2017/01/24 17:55:43 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*dup;

	if (!s || !f)
		return (NULL);
	dup = ft_strdup(s);
	i = 0;
	while (dup && dup[i])
	{
		dup[i] = f(i, dup[i]);
		i++;
	}
	return (dup);
}
