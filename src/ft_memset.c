#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	char *str;

	i = 0;
	str = b;
	while (i < len)
		str[i++] = c;
	return (b);
}
