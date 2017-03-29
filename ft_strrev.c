#include "libft.h"

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	tmp;
	int		lenlen;

	i = 0;
	len = ft_strlen(str) - 1;
	i = 0;
	lenlen = ft_strlen(str) / 2;
	while (lenlen--)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		len--;
		i++;
	}
	len = ft_strlen(str);
	str[len + 1] = '\0';
	return (str);
}
