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
    char            *x;
    unsigned int    i;

    i = 0;
    if (!s)
        return (NULL);
    x = malloc(sizeof(char) * ft_strlen(s) + 1);
    if (!(x))
        return (NULL);
    while (i != ft_strlen(s))
    {
        x[i] = (*f)(i, s[i]);
        i++;
    }
    x[i] = '\0';
    return (x);
}
