 #include "libft.h"
 
void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && src[i] != c)
		dst[i] = src[i++];
	if (src[i] == c)
	{
		dest[i] = src[i];
		return (dest + i + 1);
	}
	return (NULL);
}
