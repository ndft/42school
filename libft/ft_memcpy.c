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
