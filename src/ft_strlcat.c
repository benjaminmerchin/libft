/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 02:43:05 by bmerchin          #+#    #+#             */
/*   Updated: 2020/10/25 02:45:10 by bmerchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t size;

	i = 0;
	j = 0;
	if (dstsize < (size_t)ft_strlen(dst))
		size = dstsize + ft_strlen(src);
	else
		size = ft_strlen(dst) + ft_strlen(src);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && i + 1 < dstsize)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (size);
}
