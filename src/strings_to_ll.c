#include "push_swap.h"
#include "libft.h"

// Create an element of the list
t_pslist	*ft_create_elem_two(int *data)
{
	t_pslist	*pt_new_elem;

	pt_new_elem = malloc(sizeof(t_pslist));
	if (pt_new_elem == 0)
		return (NULL);

	pt_new_elem->next = NULL;
	pt_new_elem->number = data;
	return (pt_new_elem);
}

// Add a node at the end of the linked list
void	ft_list_push_back_two(t_pslist **begin_list, void *data)
{
	t_pslist	*node4;
	t_pslist	*deref_begin_list;

	deref_begin_list = *begin_list;
	node4 = ft_create_elem_two(data);
	node4->number = data;
	while (deref_begin_list->next != NULL)
		deref_begin_list = deref_begin_list->next;
	deref_begin_list->next = node4;
}

// convert strings to linked list
t_pslist	*strings_to_ll(char **strings)
{
	t_pslist	*stack_a;
	int			nbr;

	nbr = ft_atoi(*strings);
	stack_a = ft_create_elem_two(&nbr);
	strings++;
	while(*strings)
	{
		nbr = ft_atoi(*strings);
		ft_list_push_back_two(&stack_a, &nbr);
		strings++;
	}
	return (stack_a);
}
