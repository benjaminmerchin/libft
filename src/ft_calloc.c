#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t i;
	char *tab;

	i = 0;
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (!(tab = malloc(size * count)))
		return (0);
	while (i < count * size)
		tab[i++] = 0;
	return ((void *)tab);
}
