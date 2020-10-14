 #include "libft.h"
 
void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t i;
	unsigned char *d;
	unsigned char *s;
	unsigned char u;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	u = (unsigned char)c;
	while (i < n && s[i] != u)
	{
		d[i] = s[i];
		i++;
	}
	if (s[i] == u)
	{
		d[i] = s[i];
		return (dst + i + 1);
	}
	return (NULL);
}
