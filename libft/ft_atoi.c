//
//  ft_atoi.c
//  
//
//  Created by Andrey Udalov on 17.10.2021.
//

/*
 Функция atoi конвертирует строку, на которую указывает параметр str, в величину типа int. Строка должна содержать корректную запись целого числа. В противном случае возвращается 0. Число может завершаться любым символом, который не может входить в состав строкового представления целого числа. Сюда относятся пробелы, знаки пунктуации и другие знаки, не являющиеся цифрами.
 */

#include <libft.h>

int ft_atoi(const char *str)
{
    long    i;
    long    nbr;
    int isneg;

    i = 0;
    nbr = 0;
    isneg = 0;
    while (str[i] != '\0' && (str[i] == 32 || str[i] == '\t' || str[i] == '\n'
            || str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
        i++;
    if (str[i] != '\0' && str[i] == '-')
    {
        isneg = 1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] != '\0' && ft_isdigit(str[i]))
        nbr = (nbr * 10) + (str[i++] - '0');
    if (isneg == 1)
        return (-nbr);
    return (nbr);
}
