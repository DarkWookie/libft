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

static int	ft_isvalid(int c)
{
	if (c == ' ' || c == '\t' || c == '\f' ||
		c == '\r' || c == '\v' || c == '\n')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int		sign;
	int		res;
	int		i;

	sign = 1;
	res = 0;
	i = 0;
	while (ft_isvalid(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - '0');
	return (res * sign);
}
