#include "libft.h"

int		ft_isneg(int n)
{
	if (n < 0)
		return (-1);
	else
		return (1);
}

int		ft_nlen(int n)
{
	int		len;
	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n / 10)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	int		neg;
	int		len;
	char	*str;

	i = 0;
	len = ft_nlen(n);
	if (!(str = (char *)malloc(len + 1)))
		return (NULL);
	if ((neg = ft_isneg(n)) == -1)
	{
		str[i++] = '-';
		len--;
	}
	while (len > 0)
	{
		str[i++] = ((n / ft_pow(10, --len))) % 10 * neg + 48;
	}
	str[i] = '\0';
	return (str);
}
