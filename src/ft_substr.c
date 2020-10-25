/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 02:50:42 by bmerchin          #+#    #+#             */
/*   Updated: 2020/10/25 02:50:59 by bmerchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = (size_t)start;
	j = 0;
	if (!s || i >= (size_t)ft_strlen(s) - 1)
		return (ft_calloc(1, 1));
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (j < len)
	{
		str[j] = s[i + j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
