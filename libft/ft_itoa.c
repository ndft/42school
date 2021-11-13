/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariel <mmariel@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:59:25 by mmariel           #+#    #+#             */
/*   Updated: 2021/11/13 20:38:41 by mmariel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

<<<<<<< HEAD
static int	str_len(int n)
{
	int		len;
	long	buf;

	len = 1;
	buf = n;
	if (buf < 0)
	{
		len++;
		buf = buf * (-1);
	}
	if (buf == 0)
		len = 1;
	while (buf >= 10)
	{
		len++;
		buf = buf / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = str_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = 0;
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		if (n == -2147483648)
			str[len-- - 1] = '8';
		if (n == -2147483648)
			n = n / 10;
		n = -n;
	}
	while (n != 0 && len >= 0)
	{
		str[len-- - 1] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
=======
static int  str_len(int n)
{
    int len;

    len = 0;
    if (n < 0)
        len++;
    if (n == 0)
        len = 1;
    while (n)
    {
        len++;
        n = n / 10;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    char    *str;
    int     len;

    len = str_len(n);
    str = ft_strnew(len);
    if (!str)
        return (NULL);
    if (n == 0)
        str[0] = '0';
    if (n < 0)
    {
        str[0] = '-';
        if (n == -2147483648)
        {
            str[len-- - 1] = '8';
            n = n / 10;
        }
        n = -n;
    }
    while (n != 0 && len >= 0)
    {
        str[len-- - 1] = n % 10 + 48;
        n = n / 10;
    }
    return (str);
>>>>>>> 1f99b077c6bdcb3eae1ffa41871db73a98a18cc6
}
