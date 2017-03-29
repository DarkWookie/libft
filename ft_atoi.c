/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 17:50:51 by rgroscla          #+#    #+#             */
/*   Updated: 2017/01/19 21:11:18 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned int	res;
	int				sign;

	sign = 1;
	res = 0;
	while (*str == '\v' || *str == '\n' || *str == '\r' ||
			*str == '\t' || *str == '\f' || *str == ' ')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str && '0' <= *str && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		str++;
	}
	return ((int)(sign * res));
}
