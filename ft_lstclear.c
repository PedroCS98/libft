#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;

	while(*lst)
	{
		current = *lst;
		ft_lstdelone(lst, del);
		*lst = current -> next;
	}
}