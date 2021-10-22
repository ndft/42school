//
//  ft_memmove.c
//  
//
//  Created by Andrey Udalov on 17.10.2021.
//

/*
 Функция memmove копирует n байт из массива (области памяти), на который указывает аргумент src, в массив (область памяти), на который указывает аргумент dst. При этом массивы (области памяти) могут пересекаться.
 */

#include <libft.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    char *dst2;
    char *src2;

    dst2 = (char *)dst;
    src2 = (char *)src;
    if (dst == src)
        return (dst);
    if (src2 < dst2)
    {
        while (len--)
            *(dst2 + len) = *(src2 + len);
        return (dst);
    }
    while (len--)
        *dst2++ = *src2++;
    return (dst);
}
