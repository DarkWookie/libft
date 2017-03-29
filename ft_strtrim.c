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
	int		start;
	int		end;
	int		i;
	char	*trim;

	i = 0;
	start = 0;
	end = ft_strlen(s);
	while (s[start] == ' ' || s[start] == ',' || s[start] == '\n'
		|| s[start] == '\t')
		start++;
	while (s[end] == ' ' || s[end] == ',' || s[end] == '\n'
		|| s[end] == '\t')
		end--;
	if (!s || !(trim = (char *)malloc(end - start + 1)))
		return (NULL);
	while (s[start])
		trim[i++] = s[start++];
	trim[i] = '\0';
	return (trim);
}
