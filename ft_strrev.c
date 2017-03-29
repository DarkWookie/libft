#include "libft.h"

char	*ft_strrev(char *str)
{
	char	tmp;
	int		len;
	int		lenlen;
	int		i;

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
