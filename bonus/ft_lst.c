#include "libft.h"
/*
void del(void *content)
{
	free(content);
}

void *f(void *content)
{
	char *temp;

	temp = (char *)content;
	if (temp[0] == 'o')
		temp = "ooooo";
	return ((void *)temp);
}
*/

t_list *ft_lstnew(void *content)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!new || !alst)
		return ;
	new->next = *alst;
	*alst = new;
}

int ft_lstsize(t_list *lst)
{
	int i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

t_list *ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *lst;

	if (!alst)
		return ;
	lst = *alst;
	if (!lst)
	{
		*alst = new;
		return ;
	}
	while (lst->next)
		lst = lst->next;
	lst->next = new;
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	(*del)(lst->content);
	free(lst);
}

void ft_lstclear(t_list **lst, void (*del)(void*))
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

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/*
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *begin;
	
	if (!f || !del || !lst)
		return (NULL);
	new = NULL;
	while (lst)
	{
		if (new)
		{
			new->next = malloc(sizeof(t_list));
			new = new->next;
//			printf("1");
		}
		else
		{
			new = malloc(sizeof(t_list));
			begin = new;
//			printf("2");
		}
		new->next = NULL;
		new->content = (*f)(lst->content);
		lst = lst->next;
	}
	return (begin);
}*/
/*
int main(void)
{
	t_list *lst;
	t_list *backup0;
	t_list *backup1;
	t_list *backup2;
	t_list *test;
	int i;
	int nbr;

	i = 5;
	lst = malloc(sizeof(t_list));
	backup0 = lst;
	backup1 = lst;
	backup2 = lst;
	while (i)
	{
//		write(1, "2", 1);
		nbr = i % 3;
		if (nbr == 0)
			lst->content = (void *)"ko";
		if (nbr == 1)
			lst->content = (void *)"ok";
		if (nbr == 2)
			lst->content = (void *)"kk";
		lst->next = malloc(sizeof(t_list));
		lst = lst->next;
		i--;
//		write(1, "1", 1);
	}
	lst->content = (void *)("oo");
	lst->next = NULL;
	lst = backup1;
	while (backup0)
	{
		printf("%s\n", (char *)backup0->content);
		backup0 = backup0->next;
	}
	printf("------------------------\n");
//	ft_lstadd_front(&backup2, ft_lstnew((void *)"hoo"));
//	printf("%d\n", ft_lstsize(lst));
//	test = ft_lstlast(lst);
//	printf("%s\n", (char *)test->content);
//	printf("------------------------\n");
//	ft_lstadd_back(&backup1, ft_lstnew((void *)"hoo"));
//	ft_lstclear(&backup1, void (*del)(void*));
	backup1 = ft_lstmap(lst, f, del);
	while (backup1)
	{
//		write(1, "2", 1);
		printf("%s\n", (char *)backup1->content);
		backup1 = backup1->next;
	}
	return (0);
}*/
