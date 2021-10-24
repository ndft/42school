//
//  ft_memcpy.c
//  
//
//  Created by Andrey Udalov on 17.10.2021.
//

/*
 Функция memcpy копирует n байт из массива (области памяти), на который указывает аргумент src, в массив (область памяти), на который указывает аргумент dst. Если массивы перекрываются, результат копирования будет не определен.
 */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char   *dst2;
    unsigned char   *src2;

    dst2 = (unsigned char *)dst;
    src2 = (unsigned char *)src;
    if ((dst == src) || n == 0)
        return (dst);
    if (!dst && !src)
        return (0);
    while (n--)
        *dst2++ = *src2++;
    return (dst);
}
