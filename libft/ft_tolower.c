//
//  ft_tolower.c
//  
//
//  Created by Andrey Udalov on 15.10.2021.
//

/*
 Функция tolower возвращает соответствующий нижнему регистру эквивалент символа c, если c — это буква верхнего регистра. В противном случае c возвращается неизмененным.
 */

#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return (c);
}
