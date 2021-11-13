/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariel <mmariel@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:59:52 by mmariel           #+#    #+#             */
/*   Updated: 2021/11/13 18:59:52 by mmariel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lstx;

	if (!lst)
		return ;
	while (*lst)
	{
		lstx = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = lstx;
	}
}
