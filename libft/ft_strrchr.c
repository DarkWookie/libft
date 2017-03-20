/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 18:28:59 by rgroscla          #+#    #+#             */
/*   Updated: 2017/01/18 18:35:04 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	b;
	int		s_len;

	b = (char) c;
	while (s[s_len] != b)
		len--;
	if (*s == b)
		return (s);
	else
		return (NULL);
}
