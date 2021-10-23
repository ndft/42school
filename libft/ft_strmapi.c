//
//  ft_strmapi.c
//  
//
//  Created by Andrey Udalov on 23.10.2021.
//

/*
 Применяет функцию f к каждому символу строки s для создания новой строки (с помощью malloc) в результате последовательных применений f.
 */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char    *str;

    if (!s)
        return (0);
    if (!(str = malloc(ft_strlen(s) + 1)))
        return (0);
    i = 0;
    while (str[i])
    {
        str[i] = f(i, str[i]);
        i++;
    }
    return (str);
}
