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
    return (ft_memchr(s, c, ft_strlen(s) + 1));
}
