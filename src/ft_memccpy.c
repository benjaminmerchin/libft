/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 02:33:00 by bmerchin          #+#    #+#             */
/*   Updated: 2020/10/25 02:37:39 by bmerchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
int c, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	u;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	u = (unsigned char)c;
	while (i < n && s[i] != u)
	{
		d[i] = s[i];
		i++;
	}
	if (s[i] == u)
	{
		d[i] = s[i];
		return (dst + i + 1);
	}
	return (NULL);
}
