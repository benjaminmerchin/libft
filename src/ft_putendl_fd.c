#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	int i;
	int len;
	unsigned char *str;

	i = 0;
	len = ft_strlen(s);
	str = (unsigned char *)s;
	if (!s)
	{
		write(fd, "\n", 1);
		return ;
	}
	while (i < len)
	{
		write(fd, &str[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
