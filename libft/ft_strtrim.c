//
//  ft_strtrim.c
//  
//
//  Created by Andrey Udalov on 22.10.2021.
//

/*
 Функция ft_strtrim выделяет (с помощью malloc) и возвращает копию s1 с символами, указанными в set, удаленными из начала и конца строки.
 */

#include "libft.h"

static int    ft_char (char c, char const *set)
{
    size_t    i;

    i = 0;
    while (set[i] != 0)
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    size_t    i;
    size_t    start;
    size_t    end;

    start = 0;
    i = 0;
    end = ft_strlen(s1);
    while (s1[start] && ft_char(s1[start], set))
        start++;
    while (end > start && ft_char(s1[end -1], set))
        end--;
    str = malloc(sizeof(*s1) * (end - start +1));
    if (!str)
        return (NULL);
    while (start < end)
        str[i++] = s1[start++];
    str[i] = 0;
    return (str);
}
