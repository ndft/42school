//
//  ft_bzero.c
//  
//
//  Created by Andrey Udalov on 16.10.2021.
//

/*
 Функция bzero устанавливает первые n байт области, начинающейся с s, в ноль (байты, содержащие '\0').
 */

#include <libft.h>

void    ft_bzero(void *s, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        ((char *)s)[i] = 0;
        i++;
    }
}
