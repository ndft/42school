//
//  ft_putchar_fd.c
//  
//
//  Created by Andrey Udalov on 24.10.2021.
//

/*
 Выводит символ c в указанный файловым дескриптором поток.
 */

#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
