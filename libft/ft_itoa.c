#include "libft.h"

static int  str_len(int n)
{
    int len;

    len = 0;
    if (n < 0)
        len++;
    if (n == 0)
        len = 1;
    while (n)
    {
        len++;
        n = n / 10;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    char    *str;
    int     len;

    len = str_len(n);
    str = ft_strnew(len);
    if (!str)
        return (NULL);
    if (n == 0)
        str[0] = '0';
    if (n < 0)
    {
        str[0] = '-';
        if (n == -2147483648)
        {
            str[len-- - 1] = '8';
            n = n / 10;
        }
        n = -n;
    }
    while (n != 0 && len >= 0)
    {
        str[len-- - 1] = n % 10 + 48;
        n = n / 10;
    }
    return (str);
}
