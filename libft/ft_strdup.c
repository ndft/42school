//
//  ft_strdup.c
//  
//
//  Created by Andrey Udalov on 22.10.2021.
//

/*
 Функция strdup дублирует строку, на которую указывает аргумент s1. Память под дубликат строки выделяется с помощью функции malloc, и по окончанию работы с дубликатом должна быть очищена с помощью функции free.
 */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char    *result;
    size_t  len;

    len = ft_strlen(s1) + 1;
    result = malloc(sizeof(char) * len);
    if (!result)
        return (0);
    result = ft_memcpy(result, s1, len);
    //free(buffer);
    return (result);
}
