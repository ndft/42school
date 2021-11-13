/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariel <mmariel@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:00:02 by mmariel           #+#    #+#             */
/*   Updated: 2021/11/13 19:00:02 by mmariel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *l, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*lstx;

	if (!l)
		return (NULL);
	new = ft_lstnew(f(l->content));
	if (!(new))
		return (NULL);
	lstx = new;
	while (l)
	{
		if (l->next)
		{
			new->next = ft_lstnew(f(l->next->content));
			if (!(new->next))
			{
				ft_lstclear(&new, del);
				return (NULL);
			}
			new = new->next;
		}
		l = l->next;
	}
	new->next = NULL;
	return (lstx);
}
