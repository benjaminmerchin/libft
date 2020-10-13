#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s) + 1;
	while (s[i] != (char)c && s[i] >= 0)
		i--;
	if (s[i] == (char)c)
		return (s + i);
	return (NULL);
}
