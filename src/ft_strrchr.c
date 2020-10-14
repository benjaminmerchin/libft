#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;
	char *str;

	str = (char *)s;
	i = ft_strlen(str);
	while (str[i] != (char)c && i > 0)
		i--;
	if (str[i] == (char)c)
		return (str + i);
	return (NULL);
}
