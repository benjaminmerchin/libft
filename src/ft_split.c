/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 02:40:43 by bmerchin          #+#    #+#             */
/*   Updated: 2020/11/16 15:36:43 by bmerchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbr_str(char *s, char c)
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			counter++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (counter);
}

static int	ft_len_str(int i, char *s, char c)
{
	int counter;

	counter = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		counter++;
	}
	return (counter);
}

static char	**ft_split2(char **tab, char const *s, char c, int nbr_str)
{
	int len_str;
	int cursor;
	int i;
	int j;

	i = 0;
	cursor = 0;
	while (i < nbr_str)
	{
		j = 0;
		while (s[cursor] == c)
			cursor++;
		len_str = ft_len_str(cursor, (char *)s, c);
		if (!(tab[i] = malloc(sizeof(char) * (len_str + 1))))
			return (0);
		while (s[cursor] != c)
		{
			tab[i][j] = s[cursor];
			cursor++;
			j++;
		}
		tab[i++][j] = '\0';
	}
	tab[nbr_str] = 0;
	return (tab);
}

char		**ft_split(char const *s, char c)
{
	int		nbr_str;
	char	**tab;

	if (!s)
		return (NULL);
	nbr_str = ft_nbr_str((char *)s, c);
	if (!(tab = malloc(sizeof(char *) * (nbr_str + 1))))
		return (0);
	return (ft_split2(tab, s, c, nbr_str));
}
