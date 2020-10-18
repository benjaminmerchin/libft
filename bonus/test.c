typedef struct    s_list
{
    void            *content;
    struct s_list    *next;
}                t_list;

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    t_list *lst;
    t_list *backup0;
    t_list *backup1;
    t_list *backup2;
    int i;
    char *temp;
    int  *ptr;

    i = 10;
    lst = malloc(sizeof(t_list));
    backup0 = lst;
    backup1 = lst;
    backup2 = lst;
    while (i)
    {
        ptr = (int *)malloc(sizeof(int));
        *ptr = i % 3;
        lst->content = (void *)ptr;
        lst->next = malloc(sizeof(t_list));
        lst = lst->next;
        i--;
    }
    ptr = (int *)malloc(sizeof(int));
    *ptr = 20;
    lst->content = (void *)ptr;
    lst->next = NULL;
    while (backup0)
    {
        printf("%d\n", *(int *)backup0->content);
        backup0 = backup0->next;
    }
    return (0);
}
