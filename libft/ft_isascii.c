//
//  ft_isascii.c
//  
//
//  Created by Andrey Udalov on 15.10.2021.
//

/*
 Функция isascii возвращает ненулевое значение, если значение c находится в пределах от 0 до 0x7F, в противном случае возвращается 0.
 */

#include "libft.h"

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    else
        return (0);
}
