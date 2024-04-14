#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*new_lst;

	if (!lst)
		return (NULL);
	new_lst = NULL;
	while(lst != NULL)
	{
		ft_lstadd_back(new_lst, f(lst->content));
		if (ft_lstlast(new_lst) == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		lst = lst -> next;	
	}
	//ft_lstadd_back(new_lst, NULL);
	return (new_lst);
}

//iterates lst applying f
//creates new list from the f'ed list
//uses del if last node is null