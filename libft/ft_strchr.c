//
//  ft_strchr.c
//  
//
//  Created by Andrey Udalov on 17.10.2021.
//

/*
 Функция strchr ищет первое вхождения символа, код которого указан в аргументе c, в строке, на которую указывает аргумент s.
 */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return ((char *)s + i);
        i++;
    }
    if (s[i] == c)
        return ((char *)s + i);
    return (0);
}
