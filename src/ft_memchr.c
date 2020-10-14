#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *str;
	unsigned char u;

	i = 0;
	str = (unsigned char *)s;
	u = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == u)
			return (str + i);
		i++;
	}
	return (NULL);
}
