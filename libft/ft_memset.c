//
//  ft_memset.c
//  
//
//  Created by Andrey Udalov on 16.10.2021.
//

/*
 Функция memset заполняет первые len байт области памяти, на которую указывает аргумент b, символом, код которого указывается аргументом c.
 */

#include <libft.h>

void    *ft_memset(void *b, int c, size_t len)
{
    size_t  i;

    i = 0;
    while (i < len)
    {
        ((unsigned char *)b)[i] = (unsigned char)c;
        i++;
    }
    return (b);
}
