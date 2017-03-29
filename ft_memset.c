/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 02:31:02 by rgroscla          #+#    #+#             */
/*   Updated: 2017/01/17 02:31:04 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*a;
	unsigned char	u;

	*a = *b;
	u = c;
	while (len > 0)
	{
		*a = u;
		*a++;
		len--;
	}
	return (b);
}
