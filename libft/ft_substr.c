//
//  ft_substr.c
//  
//
//  Created by Andrey Udalov on 22.10.2021.
//

/*
 Функция ft_substr выделяет (с помощью malloc) и возвращает подстроку из строки s. Подстрока начинается с индекса start и имеет максимальный размер len.
 */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t  i;

    if (!s)
        return (0);
    if (start >= ft_strlen(s))
    {
        str = (char *)malloc(0);
        return (str);
    }
    str = malloc(sizeof(char) * (len + 1));
    i = 0;
    if (!str)
        return (0);
    while (i < len)
    {
        str[i] = *(s + start + i);
        i++;
    }
    str[i] = 0;
    return (str);
}
