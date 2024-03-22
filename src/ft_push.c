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

void    ft_push_b(t_stack **stack_a, t_stack **stack_b)
{
    if (!(*stack_a))
        return ;
    ft_list_push_front_two(stack_b, (*stack_a)->number);
    *stack_a = (*stack_a)->next;
	ft_printf("pb");
}

void    ft_push_a(t_stack **stack_b, t_stack **stack_a)
{
    if (!(*stack_b))
        return ;
    ft_list_push_front_two(stack_a, (*stack_b)->number);
    *stack_b = (*stack_b)->next;
	ft_printf("pa");
}
