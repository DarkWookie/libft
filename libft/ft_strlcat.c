//#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(char *str)
{
	size_t		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t		ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i;
	char	*tmp;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	i = 0;
	if (!(tmp = (char *)malloc(sizeof(char) * (len_src + len_dst + 1))))
		return (0);
	if (size == 0)
		return (len_src);
	while (src[i] && (len_dst + i) < (size - 1))
	{
		tmp[i] = dst[i];
		tmp[len_dst + i] = src[i];
		i++;
	}
	tmp[len_dst + i] = '\0';
	if (len_dst < size)
		return (len_dst + len_src);
	return (len_src + size);
}

int		main(void)
{
	printf("ft_strlcat = %lu\n", ft_strlcat("123", "45", 2));
	printf("strlcat = %lu  |  ft_strlcat = %lu\n", strlcat("123", "45", 0),
		ft_strlcat("123", "45", 0));
	printf("strlcat = %lu  |  ft = %lu\n", strlcat("123", "456", 1),
		ft_strlcat("123", "456", 1));
	printf("strlcat = %lu  |  ft = %lu\n", strlcat("123", "456", 2),
		ft_strlcat("123", "456", 2));
	return (0);
}
