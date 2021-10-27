#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int nbr;
    int sign;

    i = 0;
    nbr = 0;
    sign = 1;
    while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') ||
           (str[i] == '\r') || (str[i] == '\v') || (str[i] == '\f'))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nbr = (nbr * 10) + (str[i] - '0');
        i++;
    }
    return (sign * nbr);
}
