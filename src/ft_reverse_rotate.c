#include "push_swap.h"

void    ft_both_reverse_rotate(t_stack **stack_a, t_stack **stack_b)
{
    ft_reverse_rotate(stack_a);
    ft_reverse_rotate(stack_b);
}

void    ft_reverse_rotate(t_stack **stack)
{
    t_stack *new_last_node;
    t_stack *old_last_node;

    if (!(*stack) || !(*stack)->next)
        return ;
    new_last_node = *stack;
    *stack = (*stack)->next;
    old_last_node = *stack;
    while (old_last_node->next)
        old_last_node = old_last_node->next;
    old_last_node->next = new_last_node;
    new_last_node->next = NULL;
}