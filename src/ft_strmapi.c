#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	unsigned int len;
	char *str;

	if (!s)
		return (calloc(1, 1));
	i = 0;
	len = ft_strlen(s);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, (char)s[i]);
		i++;
	}
	str[len] = '\0';
	return (str);
}
