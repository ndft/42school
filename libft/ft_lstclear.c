//
//  ft_lstclear.c
//  
//
//  Created by Andrey Udalov on 26.10.2021.
//

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list    *x;

    if (!lst)
        return ;
    while (*lst)
    {
        x = (*lst)->next;
        del((*lst)->content);
        free(*lst);
        (*lst) = x;
    }
}
