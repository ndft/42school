//
//  ft_strtrim.c
//  
//
//  Created by Andrey Udalov on 22.10.2021.
//

/*
 Функция ft_strtrim выделяет (с помощью malloc) и возвращает копию s1 с символами, указанными в set, удаленными из начала и конца строки.
 */

#include <libft.h>

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  i;
    char    result;

    if (!s1 || !set)
        return (0);
    while (*s1 && ft_strchr(set, *s1))
        s1++;
    i = ft_strlen(s1);
    while (i && ft_strchr(set, s1[i]))
        i--;
    result = ft_substr((char *)s1, 0, i + 1);
    return (result);
}
