#include "libft.h"

int ft_clean(t_list **lst)
{
    t_list  *ptr;
    t_list  *temp;

    if (!*lst)
        return (-1);    
    ptr = *lst;
    while (ptr)
    {
        free(ptr->content);
        temp = ptr;
        ptr = ptr->next;
        free(temp);
    }
    return (0);
}