/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 13:25:03 by rgroscla          #+#    #+#             */
/*   Updated: 2017/03/20 13:25:08 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isxdigit(int c)
{
	int		digit;

	digit = ft_isdigit(c);
	if (digit == 1 || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'))
		return (1);
	else
		return (0);
}
