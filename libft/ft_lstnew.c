//
//  ft_lstnew.c
//  
//
//  Created by Andrey Udalov on 26.10.2021.
//

#include "libft.h"

t_list    *ft_lstnew(void *content)
{
    t_list *rtn;

    rtn = (t_list *)malloc(sizeof(t_list));
    if (!rtn)
        return (rtn = NULL);
    rtn->next = NULL;
    rtn->content = content;
    return (rtn);
}
