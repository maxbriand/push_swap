#include "push_swap.h"

void    ft_free_stack(t_stack **stack_a)
{
    t_stack *store;

    while ((*stack_a)->next)
    {
        store = *stack_a;
        *stack_a = (*stack_a)->next;
        free(store);    
    }
    free(*stack_a);
}