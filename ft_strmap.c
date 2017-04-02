/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 17:57:57 by rgroscla          #+#    #+#             */
/*   Updated: 2017/01/24 17:48:11 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*dup;

	if (!s || !f)
		return (NULL);
	dup = ft_strdup(s);
	i = 0;
	while (dup && dup[i])
	{
		dup[i] = f(dup[i]);
		i++;
	}
	return (dup);
}
