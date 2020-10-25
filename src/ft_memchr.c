/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 02:33:27 by bmerchin          #+#    #+#             */
/*   Updated: 2020/10/25 02:33:41 by bmerchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	u;

	i = 0;
	str = (unsigned char *)s;
	u = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == u)
			return (str + i);
		i++;
	}
	return (NULL);
}
