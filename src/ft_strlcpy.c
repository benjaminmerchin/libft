#include "libft.h"

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
{
	size_t i;
	
	i = 0;
	while (src[i] && i + 1 < dstsize)
		dst[i] = src[i++];
	dst[i] = '\0';
	return (i);
}
