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
    size_t        len;
    size_t        c1;
    size_t        c2;

    c1 = 0;
    if (!src)
        return (0);
    len = ft_strlen(src);
    if (dstsize == 0)
        return (len);
    c2 = dstsize - 1;
    while (c2 > 0 && src[c1] != '\0')
    {
        dst[c1] = src[c1];
        c1++;
        c2--;
    }
    dst[c1] = '\0';
    return (len);
}
