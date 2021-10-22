//
//  ft_strrchr.c
//  
//
//  Created by Andrey Udalov on 17.10.2021.
//

/*
 Функция strrchr ищет последнее вхождения символа, код которого указан в аргументе c, в строке, на которую указывает аргумент s.
 */

#include <libft.h>

char    *ft_strrchr(const char *s, int c)
{
    int i;
    char    *ptr;

    i = 0;
    ptr = 0;
    while (s[i])
    {
        if (s[i] == c)
            ptr = (char *)(s + i);
        i++;
    }
    if (s[i] == c)
        ptr = (char *)(s + i);
    return (ptr);
}
