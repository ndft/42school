//
//  ft_strlcpy.c
//  
//
//  Created by Andrey Udalov on 17.10.2021.
//

/*
 Функция strlcpy копирует из строки src в буфер dst не более чем size - 1 символов и гарантированно устанавливает в конец строки нулевой символ. strlcat делает то же самое, однако копирование ведётся не в начало dst, а таким образом, чтобы продолжить строку, на которую указывает dst. В случае, когда dst указывает на нуль-символ, поведение функций эквивалентно.
 */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t    size;

    size = 0;
    while (src[size])
        size++;
    if (dstsize == 0)
        return (size);
    size = 0;
    while (src[size] && size < dstsize -1)
    {
        dst[size] = src[size];
        size++;
    }
    dst[size] = '\0';
    size = 0;
    while (src[size])
        size++;
    return (size);
}
