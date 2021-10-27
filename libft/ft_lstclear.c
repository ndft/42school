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
