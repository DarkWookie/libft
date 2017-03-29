/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 17:43:04 by rgroscla          #+#    #+#             */
/*   Updated: 2017/03/29 20:44:50 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*buf;

	i = 0;
	if (!(buf = (char *)malloc(size)))
		return (NULL);
	while (i < size)
		buf[i++] = '\0';
	return (buf);
}
