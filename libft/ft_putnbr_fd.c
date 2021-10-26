//
//  ft_putnbr_fd.c
//  
//
//  Created by Andrey Udalov on 24.10.2021.
//

/*
 Выводит целое число n в указанный файловым дескриптором поток.
 */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        ft_putchar_fd('2', fd);
        n %= 1000000000;
        n = -n;
    }
    if (n < 0)
    {
        write(fd, "-", 1);
        n = -n;
        ft_putnbr_fd(n, fd);
    }
    if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
    else
        ft_putchar_fd(n + '0', fd);
}