/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 21:01:20 by rgroscla          #+#    #+#             */
/*   Updated: 2017/01/27 06:14:07 by rgroscla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
//ne pas oublier d'enlever la lib
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char	*cat(char c, char *src, int len)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	printf("src = %s\n", src);
	if (!(dest = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	dest[i++] = c;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	printf("dest = %s\n", dest);
	return (dest);
}

int		get_size(int n)
{
	int		len;

	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	if (n < 10 && n >= 0)
		len++;
	return (len);
}

char	*to_string(unsigned int n, int len, char *str)
{
	if (n == 0)
		*str = 48;
	else if (n > 9)
	{
		to_string(n / 10, len - 1, str);
		str[len] = 48 + (n % 10);
	}
	else
		*str = 48 + n;
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	char			c_sign;
	int				sign;

	c_sign = '\0';
	sign = n < 0 ? 1 : 0;
	len = get_size(n);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1 + sign))))
		return (NULL);
	if (sign)
	{
		n = -n;
		to_string(n, len + 1, str);
		c_sign = '-';
	}
	else
		to_string(n, len - 1, str);
	str[len] = '\0';
	if (c_sign)
		return (cat(c_sign, str, len + 1));
	else
		return (str);
}

int		main(void)
{
//	printf("%s\n", ft_itoa(0));
//	printf("%s\n", ft_itoa(-5));
//	printf("%s\n", ft_itoa(8));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(42));
	printf("%s\n", ft_itoa(-12));
	printf("%s\n", ft_itoa(-8942));
	printf("%s\n", ft_itoa(1234));
	return (0);
}
