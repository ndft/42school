//
//  ft_isdigit.c
//  
//
//  Created by Andrey Udalov on 15.10.2021.
//

/*
 Функция isdigit возвращает ненулевое значение, если аргумент c является цифрой от 0 до 9, в противном случае возвращается 0.
 */

#include "libft.>"

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}
