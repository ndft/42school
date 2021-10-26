//
//  ft_strrchr.c
//  
//
//  Created by Andrey Udalov on 17.10.2021.
//

/*
 Функция strrchr ищет последнее вхождения символа, код которого указан в аргументе c, в строке, на которую указывает аргумент s.
 */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    const char  *s2;
    char    c2;

    s2 = s;
    c2 = c;
    while (*s2)
    {
        s2++;
    }
    while (s2 >= s)
    {
        if (*s2-- == c2)
        {
            return ((char *)s2 + 1);
        }
    }
    return (NULL);
}
