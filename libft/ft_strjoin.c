//
//  ft_strjoin.c
//  
//
//  Created by Andrey Udalov on 22.10.2021.
//

/*
 Функция ft_strjoin выделяет (с помощью malloc) и возвращает новую строку, которая является результатом объединения s1 и s2.
 */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    size_t  s1_len;
    size_t  s2_len;
    size_t  len;

    if (!s1 && !s2)
        return (0);
    len = ft_strlen((char *)s1) + ft_strlen(s2) + 1;
    str = (char *)malloc(len);
    if (!str)
        return (0);
    s1_len = 0;
    s2_len = 0;
    while (s1 && s1[s1_len])
    {
        str[s1_len] = s1[s1_len];
        s1_len++;
    }
    while (s2 && s2[s2_len])
        str[s1_len++] = s2[s2_len++];
    str[s1_len] = '\0';
    return (str);
}
