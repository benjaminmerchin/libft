/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Benjamin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 00:47:53 by Benjamin          #+#    #+#             */
/*   Updated: 2020/10/16 02:35:59 by Benjamin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isinset(char c, char *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int ft_counter_len(char const *s1, char const *set)
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (ft_isinset(s1[i], (char *)set))
	{
		counter++;
		i++;
	}
	i = ft_strlen(s1) - 1;
	while (ft_isinset(s1[i], (char *)set))
	{
		counter++;
		i--;
	}
	return (ft_strlen(s1) - counter);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	int len;
	char *str;

	if (!s1 || !set)
		return (NULL);
	len = ft_counter_len(s1, set);
	if (len < 0)
		return (ft_calloc(1, 1));
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (ft_isinset(s1[i], (char *)set))
		i++;
	while (j < len)
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	str[len] = '\0';
	return (str);
}
