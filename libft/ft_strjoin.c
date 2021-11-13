/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariel <mmariel@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:00:46 by mmariel           #+#    #+#             */
/*   Updated: 2021/11/13 19:00:46 by mmariel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;
	size_t	len;

	if (!s1 && !s2)
		return (0);
	len = ft_strlen((char *)s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(len);
	if (!str)
		return (0);
	s1_len = 0;
	s2_len = 0;
	while (s1 && s1[s1_len])
	{
		str[s1_len] = s1[s1_len];
		s1_len++;
	}
	while (s2 && s2[s2_len])
		str[s1_len++] = s2[s2_len++];
	str[s1_len] = '\0';
	return (str);
}
