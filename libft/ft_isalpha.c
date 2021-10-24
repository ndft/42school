//
//  ft_isalpha.c
//  
//
//  Created by Andrey Udalov on 15.10.2021.
//

/*
 Функция isalpha возвращает ненулевое значение, если его аргумент c является буквой алфавита (верхнего или нижнего регистра). В противном случае возвращается 0.
 */

#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}
