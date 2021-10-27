#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *res;

    res = malloc(size * count);
    if (!res)
        return (0);
    ft_bzero(res, size * count);
    return (res);
}
