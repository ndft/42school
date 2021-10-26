//
//  ft_lstiter.c
//  
//
//  Created by Andrey Udalov on 26.10.2021.
//

#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst || !f)
        return ;
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}
