/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 01:58:20 by rgroscla          #+#    #+#             */
/*   Updated: 2017/01/27 02:05:19 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	u;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		u = -n;
	}
	u = n;
	if (u >= 10)
	{
		ft_putnbr_fd(u / 10, fd);
		ft_putchar_fd(u % 10 + 48, fd);
	}
	else
		ft_putchar_fd(u + 48, fd);
}
