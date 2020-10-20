#include "libft.h"
/*
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

void *f(void *content)
{
	int *a;

	a = (int *)content;
	a[0] *= 2;
	return ((void *)a);
}

void del(void *content)
{
	free(content);
}
*/
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *begin;
	t_list *temp;

	(void)del;
	if (!lst || !f)
		return (NULL);
	if (lst)
	{
		new = malloc(sizeof(t_list));
		begin = new;
		while (lst)
		{
			new->content = f(lst->content);
			temp = lst;
			lst = lst->next;
			if (lst)
			{
				new->next = malloc(sizeof(t_list));
				new = new->next;
			}
			else
				new->next = NULL;
		}
		return (begin);
	}
	return (NULL);
}

/*
int main(void)
{
	t_list *lst;
	t_list *backup0;
	t_list *backup1;
	t_list *backup2;
	t_list *backup3;
	int *ptr;
	int i;

	i = 5;
	lst = malloc(sizeof(t_list));
	backup0 = lst;
	backup1 = lst;
	backup2 = lst;
	backup3 = lst;
	while (i)
	{
		ptr = malloc(sizeof(int));
		ptr[0] = i % 3;
		lst->content = (void *)ptr;
		lst->next = malloc(sizeof(t_list));
		lst = lst->next;
		i--;
	}
	ptr = malloc(sizeof(int));
	*ptr = 3;
	lst->content = (void *)ptr;
	lst->next = NULL;

	while (backup0)
	{
//		ptr = (int *)(backup1->content);
//		printf("%d\n", ptr[0]);
		printf("%d\n", ((int *)(backup0->content))[0]);
		backup0 = backup0->next;
	}
	printf("--------------------\n");
	backup2 = ft_lstmap(backup1, f, del);
	while (backup2 && backup3)
	{
		printf("Src: %d NewList: %d\n",  ((int *)(backup3->content))[0], ((int *)(backup2->content))[0]);
		backup2 = backup2->next;
		backup3 = backup3->next;
	}
	return (0);
}*/
