/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 17:25:31 by rgroscla          #+#    #+#             */
/*   Updated: 2017/03/20 17:25:33 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pow(int nb, int pow)
{
	int	res;

	res = 1;
	if (nb == 0)
		return (0);
	if (pow == 0)
		return (1);
	else
		while (pow--)
			res = res * nb;
	return (res);
}
