/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 19:20:16 by rgroscla          #+#    #+#             */
/*   Updated: 2017/01/26 19:11:18 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
int		ft_nbr_words(char const *str, char c)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c && str[i + 1] == c)
			k++;
		i++;
	}
	return (k);
}

int		ft_next_word(char const *s, char c, int next_word)
{
	while (s[next_word] && s[next_word] == c)
		next_word++;
	return (next_word);
}

int		ft_strlen_split(char const *str, char c, int next_word)
{
	int	i;

	i = 0;
	while (str[next_word] && str[next_word] != c)
	{
		next_word++;
		i++;
	}
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		nbr_words;
	int		next_word;
	int		strlen_split;
	char	**tab;
	
	next_word = 0;
	j = 0;
	nbr_words = ft_nbr_words(s,c);
	if (!s || (!(tab = (char **)malloc(sizeof(char *) * (nbr_words + 1)))))
		return (NULL);
	while (s[next_word])
	{
		i = 0;
		next_word = ft_next_word(s, c, next_word);
		if (!*s)
			break;
		strlen_split = ft_strlen_split(s, c, next_word);
		if (!(tab[j] = (char *)malloc(sizeof(char) * (strlen_split + 1))))
			return (NULL);
		while (i < strlen_split)
			tab[j][i++] = s[next_word++];
		tab[j][i] = '\0';
		j++;
		next_word++;
	}
	tab[j] = 0;
	return (tab);
}