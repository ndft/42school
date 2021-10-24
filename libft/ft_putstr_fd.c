//
//  ft_putstr_fd.c
//  
//
//  Created by Andrey Udalov on 24.10.2021.
//

/*
 Выводит строку s в указанный файловым дескриптором поток.
 */

#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    int i;

    if (s != 0)
    {
        i = 0;
        while (s[i])
        {
            ft_putchar_fd(s[i], fd);
            i++;
        }
    }
}
