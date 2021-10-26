//
//  ft_memchr.c
//  
//
//  Created by Andrey Udalov on 17.10.2021.
//

/*
 Функция memchr ищет вхождение в массив (область памяти) символа, код которого задан аргументом c, сравнивая каждый байт массива (области памяти) определенный как unsigned char с кодом искомого символа. Если искомый символ найден, то возвращается адрес найденного символа и сравнение завершается. Если, после проверки n байтов, искомый символ не найден, то сравнение прекращается и функция возвращает 0.
 */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        if (((unsigned char *)s)[i] == (unsigned char)c)
            return ((void *)&((unsigned char *)s)[i]);
        i++;
    }
    return (0);
}
