/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariel <mmariel@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:01:07 by mmariel           #+#    #+#             */
/*   Updated: 2021/11/13 19:01:07 by mmariel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*s2;
	char		c2;

	s2 = s;
	c2 = c;
	while (*s2)
	{
		s2++;
	}
	while (s2 >= s)
	{
		if (*s2-- == c2)
		{
			return ((char *)s2 + 1);
		}
	}
	return (NULL);
}
