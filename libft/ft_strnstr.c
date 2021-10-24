//
//  ft_strnstr.c
//  
//
//  Created by Andrey Udalov on 22.10.2021.
//

/*
 Функция strnstr ищет первое вхождение len символов строки (за исключением признак конца строки), на которую указывает аргумент needle, в строку , на которую указывает аргумент haystack. Если строка needle имеет нулевую длину, то функция вернет указатель на начало строки haystack.
 */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    if (needle[i] == '\0')
            return ((char *)haystack);
    while (haystack[i] != '\0')
    {
        j = 0;
        while (needle[j] == haystack[i + j] && (i + j) < len)
        {
            if (needle[j + 1] == '\0')
            {
                return (char *)(haystack + i);
            }
            j++;
        }
        i++;
    }
    return (0);
}
