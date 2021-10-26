//
//  ft_lstlast.c
//  
//
//  Created by Andrey Udalov on 26.10.2021.
//

#include "libft.h"

t_list    *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (0);
    while (lst->next)
        lst = lst->next;
    return (lst);
}
