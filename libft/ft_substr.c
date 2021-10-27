#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t    i;

    if (!s)
        return (NULL);
    i = 0;
    if (ft_strlen(s) < start)
        return (ft_strdup(""));
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    if (!(str = malloc(len + 1)))
        return (NULL);
    while (i < len)
        str[i++] = s[start++];
    str[i] = '\0';
    return (str);
}
