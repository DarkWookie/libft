/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 18:06:47 by rgroscla          #+#    #+#             */
/*   Updated: 2017/03/20 18:31:37 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_factorial(int nb)
{
	int		fac;

	fac = nb - 1;
	if (nb == 1)
		return (1);
	else
		while (fac > 0)
		{
			nb = nb * fac--;
		}
	return (nb);
}
