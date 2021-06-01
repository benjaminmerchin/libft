/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:42:23 by bmerchin          #+#    #+#             */
/*   Updated: 2020/11/16 17:56:35 by bmerchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*begin;
	t_list	*temp;

	(void)del;
	new = malloc(sizeof(t_list));
	if (!new || !lst || !f)
		return (NULL);
	begin = new;
	while (lst)
	{
		new->content = f(lst->content);
		temp = lst;
		lst = lst->next;
		if (lst)
		{
			new->next = malloc(sizeof(t_list));
			if (!new->next)
				return (NULL);
			new = new->next;
		}
		else
			new->next = NULL;
	}
	return (begin);
}
