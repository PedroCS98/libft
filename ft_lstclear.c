#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	int		i;
	t_list	*current;

	current = lst;
	i = 0;
	while(current -> next != NULL)
	{
		ft_lstdelone(lst, del);
		current = current -> next;
	}
	current = NULL;
}