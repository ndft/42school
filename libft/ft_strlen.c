//
//  ft_strlen.c
//  
//
//  Created by Andrey Udalov on 15.10.2021.
//

/*
 Функция strlen вычисляет количество символов в строке до первого вхождения символа конца строки. При этом символ конца строки не входит в подсчитанное количество символов.
 */

#include "libft.h"

size_t  ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}
