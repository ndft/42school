//
//  ft_calloc.c
//  
//
//  Created by Andrey Udalov on 17.10.2021.
//

/*
 Функция calloc выделяет блок памяти для массива размером — count элементов, каждый из которых занимает size байт, и инициализирует все свои биты в нулями.
 */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *res;

    res = malloc(size * count);
    if (!res)
        return (0);
    ft_bzero(res, size * count);
    return (res);
}
