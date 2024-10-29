#include "libft.h"

void	del(void *data)
{
	t_list	*head;

	head = data;
	head->content = NULL;
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (del)
		del(list->content);
	free(lst);
}
