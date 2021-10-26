//
//  ft_lstsize.c
//  
//
//  Created by Andrey Udalov on 26.10.2021.
//

#include "libft.h"

int    ft_lstsize(t_list *lst)
{
    int    i;

    i = 0;
    while (lst)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}
