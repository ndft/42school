//
//  ft_strlcat.c
//  
//
//  Created by Andrey Udalov on 17.10.2021.
//

/*
 Функция strlcat добавляет в строку, на которую указывает аргумент dst, строку, на которую указывает аргумент str, пока не встретится символ конца строки или пока не будет добавлено n символов. В отличие от других функций, strlcat принимает полный размер буфера и гарантирует наличие терминального символа у результата. Для корректной работы функции strlcat, ей необходимо передавать только нультерминальные строки.
 */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  dstlen;
    size_t  i;

    dstlen = ft_strlen(dst);
    if (dstsize < dstlen)
        dstlen = dstsize;
    i = dstlen;
    while (src[dstlen - i] && dstlen + 1 < dstsize)
    {
        dst[dstlen] = src[dstlen - i];
        dstlen++;
    }
    if (i < dstsize)
        dst[dstlen] = '\0';
    return (ft_strlen(src) + i);
}
