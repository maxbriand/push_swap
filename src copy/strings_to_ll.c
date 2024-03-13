#include "push_swap.h"

int	ft_atoi(const char *nptr)
{
	char	test;
	int		i;
	int		total;

	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	test = nptr[i];
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		test = nptr[i];
		i++;
	}
	total = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		total *= 10;
		total += (nptr[i] - 48);
		i++;
	}
	if (test == '-')
		total *= -1;
	return (total);
}

// Create an element of the list
t_list	*ft_create_elem(int *data)
{
	t_list	*pt_new_elem;

	pt_new_elem = malloc(sizeof(t_list));
	if (pt_new_elem == 0)
		return (NULL);

	pt_new_elem->next = NULL;
	pt_new_elem->number = data;
	return (pt_new_elem);
}

// Add a node at the end of the linked list
void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*node4;
	t_list	*deref_begin_list;

	deref_begin_list = *begin_list;
	node4 = ft_create_elem(data);
	node4->number = data;
	while (deref_begin_list->next != NULL)
		deref_begin_list = deref_begin_list->next;
	deref_begin_list->next = node4;
}

// convert strings to linked list
t_list	*strings_to_ll(char **strings)
{
	t_list	*stack_a;
	int		nbr;

	nbr = ft_atoi(*strings);
	stack_a = ft_create_elem(&nbr);
	strings++;
	while(*strings)
	{
		nbr = ft_atoi(*strings);
		ft_list_push_back(&stack_a, &nbr);
		strings++;
	}
	return (stack_a);
}
