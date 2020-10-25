/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 02:28:36 by bmerchin          #+#    #+#             */
/*   Updated: 2020/10/25 02:29:02 by bmerchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hay;

	i = 0;
	hay = (char *)haystack;
	if (needle[0] == '\0')
		return (hay);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (hay[i + j] == needle[j] && i + j < len && needle[j])
			j++;
		if (needle[j] == '\0')
		{
			return (hay + i);
		}
		i++;
	}
	return (NULL);
}
