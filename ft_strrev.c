//#include "libft.h"
//supprimer stdlib.h et stdio.h
#include <stdio.h>

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
/*
int		main(int ac, char **argv)
{
	if (ac == 2)
	{
		printf("str = %s\n", argv[1]);
		printf("strrev = %s\n", ft_strrev(argv[1]));
	}
	else
		printf("1 seul argument please !\n");
	return (0);
}*/
