#include "libft.h"

// Create an element of the list
t_list	*ft_create_elem(void *data)
{
	t_list	*pt_new_elem;

	pt_new_elem = malloc(sizeof(t_list));
	if (pt_new_elem == 0)
		return (NULL);

	pt_new_elem->next = NULL;
	pt_new_elem->data = data;
	return (pt_new_elem);
}
