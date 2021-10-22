//
//  ft_toupper.c
//  
//
//  Created by Andrey Udalov on 15.10.2021.
//

/*
 Функция toupper возвращает соответствующий верхнему регистру эквивалент символа c, если c — это буква. В противном случае c возвращается неизмененным.
 */

#include <libft.h>

int    ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}
