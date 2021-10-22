//
//  ft_strlcpy.c
//  
//
//  Created by Andrey Udalov on 17.10.2021.
//

/*
 Функция strlcpy копирует из строки src в буфер dst не более чем size - 1 символов и гарантированно устанавливает в конец строки нулевой символ. strlcat делает то же самое, однако копирование ведётся не в начало dst, а таким образом, чтобы продолжить строку, на которую указывает dst. В случае, когда dst указывает на нуль-символ, поведение функций эквивалентно.
 */

#include <libft.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    size_t  src_len;

    i = 0;
    if (!dst || !src)
        return (0);
    src_len = ft_strlen(src);
    if (!dstsize)
        return (src_len);
    while (src[i] != '\0' && i < dstsize)
    {
        dst[i] = src[i];
        i++;
    }
    if (dstsize < src_len)
        dst[dstsize - 1] = '\0';
    else if (dstsize != 0)
        dst[i] = '\0';
    return (src_len);
}
