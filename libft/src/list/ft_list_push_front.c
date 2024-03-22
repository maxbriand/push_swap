#include "libft.h"

// Push an element at the beginning of the list
void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*bloc1;

	if (begin_list == NULL)
	{
		*begin_list = ft_create_elem(data);
	}
	else
	{
		bloc1 = ft_create_elem(data);
		bloc1->next = *begin_list;
		*begin_list = bloc1;
	}
}
