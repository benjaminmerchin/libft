#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	long nbr;

	i = 0;
	nbr = 0;
	sign = 1;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{	
		if (sign == 1 && nbr > 922337203685477580)
			return (-1);
		else if (nbr > 922337203685477580)
			return (0);		
		nbr = nbr * 10 + str[i++] - '0';
	}
	return (nbr * sign);
}


/*
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_atoi(av[1]));
	printf("%d\n", atoi(av[1]));

	return (0);
}*/
