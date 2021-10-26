//
//  ft_lstdelone.c
//  
//
//  Created by Andrey Udalov on 26.10.2021.
//

#include "libft.h"

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst)
        return ;
    del(lst->content);
    free(lst);
}
