/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_voidbox.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almejia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 04:18:59 by almejia-          #+#    #+#             */
/*   Updated: 2025/02/03 04:19:04 by almejia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        *(str++) = 0;
    *str = '\0';
    node = ft_lstnew(ptr);
    ft_lstadd_back(lst, node);
    return (ptr);
}

// int main()
// {
//     t_list *dynamic_memory = NULL;
//     char *str;
//     char *str2;
//     int i = 0;

//     str = ft_voidbox(&dynamic_memory, 4);
//     str2 = ft_voidbox(&dynamic_memory, 4);
//     printf("%s\n", (char *)dynamic_memory->content);
//     printf("%s\n", (char *)dynamic_memory->next->content);
//     ft_clean(&dynamic_memory);
//     return(0);
// }
