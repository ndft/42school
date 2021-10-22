//
//  ft_calloc.c
//  
//
//  Created by Andrey Udalov on 17.10.2021.
//

/*
 
 */

#include <libft.h>

void    *ft_calloc(size_t count, size_t size)
{
    void    *rtn;

    rtn = malloc(size * count);
    if (!rtn)
        return (0);
    ft_bzero(rtn, count);
    return (rtn);
}
