//
//  ft_isprint.c
//  
//
//  Created by Andrey Udalov on 15.10.2021.
//

/*
 Функция isprint возвращает ненулевое значение, если аргумент c является печатным символом, включая пробел; в противном случае возвращается 0. Значения печатных символов находятся в пределах от 0x20 до 0х7Е.
 */

#include "libft.h"

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    else
        return (0);
}
