/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariel <mmariel@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:00:00 by mmariel           #+#    #+#             */
/*   Updated: 2021/11/13 19:00:00 by mmariel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ctt;

	ctt = (t_list *)malloc(sizeof(t_list));
	if (!ctt)
		return (ctt = NULL);
	ctt->next = NULL;
	ctt->content = content;
	return (ctt);
}
