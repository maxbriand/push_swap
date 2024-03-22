#include "push_swap.h"

void	ft_list_push_front_two(t_stack **begin_list, int number)
{
	t_stack	*bloc1;

	if (begin_list == NULL)
	{
		*begin_list = ft_create_elem_two(number);
	}
	else
	{
		bloc1 = ft_create_elem_two(number);
		bloc1->next = *begin_list;
		*begin_list = bloc1;
	}
}

void    ft_push(t_stack **src, t_stack **dest)
{
    if (!(*src))
        return ;
    ft_list_push_front_two(dest, (*src)->number);
    *src = (*src)->next; 
}
