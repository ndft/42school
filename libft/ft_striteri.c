//
//  ft_striteri.c
//  
//
//  Created by Andrey Udalov on 24.10.2021.
//

/*
 Применяет функцию f к каждому символу строки s переданной, как аргумент и
 
 (((((передает ее индекс,
 как первый аргумент))))) ??????.
 
 Каждый символ передаётся в f для изменения при необходимости
 */

#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int    i;

    if (!s || !f)
        return ;
    i = 0;
    while (s[i] != '\0')
    {
        f(i, s + i);
        i++;
    }
}
