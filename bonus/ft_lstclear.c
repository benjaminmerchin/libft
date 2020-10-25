/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 02:57:22 by bmerchin          #+#    #+#             */
/*   Updated: 2020/10/25 02:57:43 by bmerchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *l;
	t_list *nxt;

	l = *lst;
	while (l->next)
	{
		nxt = l->next;
		(*del)(l->content);
		free(l);
		l = nxt;
	}
	if (l)
	{
		(*del)(l->content);
		free(l);
	}
	*lst = NULL;
}
