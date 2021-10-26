//
//  ft_lstadd_front.c
//  
//
//  Created by Andrey Udalov on 26.10.2021.
//

#include "libft.h"

void    ft_lstadd_front(t_list **alst, t_list *new)
{
    if (!alst || !new)
        return ;
    new->next = *alst;
    *alst = new;
}
