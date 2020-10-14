#include "libft.h"
//#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char *d;
	unsigned char *s;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (s < d)
	{
		while (i++ < len)
			d[len - i] = s[len - i];
		return (dst);
	}
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
//	(void)ac;

	printf("%s\n", memmove(((void *)0), ((void *)0), 5));

	printf("%s\n", ft_memmove(((void *)0), ((void *)0), 5));
	return (0);
}*/
