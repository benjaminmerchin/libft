/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 02:31:17 by bmerchin          #+#    #+#             */
/*   Updated: 2020/11/16 17:57:13 by bmerchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long int nbr)
{
	int	i;

	i = 1;
	nbr /= 10;
	while (nbr > 0)
	{
		i++;
		nbr /= 10;
	}
	return (i);
}

static void	ft_itoa_fill(char *str, long nbr, int i)
{
	int	temp;

	temp = nbr % 10;
	str[i - 1] = temp + '0';
	nbr /= 10;
	if (nbr > 0)
		ft_itoa_fill(str, nbr, i - 1);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	int			sign;
	long int	nbr;

	i = 0;
	sign = 0;
	if (n < 0)
	{
		nbr = n;
		nbr *= -1;
		sign = 1;
		i++;
	}
	else
		nbr = n;
	str = malloc(sizeof(char) * (ft_len(nbr) + sign + 1));
	if (!str)
		return (NULL);
	if (sign == 1)
		str[0] = '-';
	ft_itoa_fill(str + sign, nbr, ft_len(nbr));
	str[ft_len(nbr) + sign] = '\0';
	return (str);
}
