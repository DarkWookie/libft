/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 17:43:04 by rgroscla          #+#    #+#             */
/*   Updated: 2017/01/21 17:53:58 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	int		i;
	char	*buf;

	i = 0;
	if (!(buf = (char *)malloc(size)))
		return (NULL);
	while (i < size)
		buf[i++] = '\0';
	return (buf);
}
