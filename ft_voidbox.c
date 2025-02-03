#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *ptr;

    if (!lst)
        return;
    ptr = *lst;
	if (!*lst)
        *lst = new;
	else
    {
        while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}	
}


void    *ft_voidbox(t_list **lst, int size)
{
    char    *str;
    void    *ptr;
    t_list   *node;

    ptr = malloc(size + 1);
    if (!ptr)
        exit(1);
    str = ptr;
    while (size-- > 0)
        *(str++) = '1';
    *str = '\0';
    node = ft_lstnew(ptr);
    ft_lstadd_back(lst, node); // ft_lstadd_back asume la responsabilidad de manejar el caso del primer nodo en lst;
    return (ptr);
}

int main()
{
    t_list *dynamic_memory = NULL;
    char *str;
    int i = 0;

    str = ft_voidbox(&dynamic_memory, 4);
    printf("%s", (char *)dynamic_memory->content);
    return(0);
}