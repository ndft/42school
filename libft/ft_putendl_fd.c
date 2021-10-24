//
//  ft_putendl_fd.c
//  
//
//  Created by Andrey Udalov on 24.10.2021.
//

/*
 Выводит строку s в указанный файловым дескриптором поток, за которой следует новая строка.
 */

#include "libft.h"

void    ft_putendl_fd(char const *s, int fd)
{
    ft_putstr_fd(s, fd);
    ft_putchar_fd('\n', fd);
}
