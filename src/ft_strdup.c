#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int i;
	int len;
	char *new;

	i = 0;
	len = ft_strlen(s1);
	if (!(new = malloc(sizeof(char) * len + 1)))
		return (0);
	while (i < len)
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
