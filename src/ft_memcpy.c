#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;
	char *temp_dst;
	char *temp_src;

	i = 0;
	temp_dst = (char *)dst;
	temp_src = (char *)src;
	if (!src && !dst)
		return (NULL);
	while (i < n)
	{
		temp_dst[i] = temp_src[i];
		i++;
	}
	return (dst);
}
