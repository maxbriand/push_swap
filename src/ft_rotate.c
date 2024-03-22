#include "push_swap.h"

void    ft_both_rotate(t_stack **stack_a, t_stack **stack_b)
{
    ft_rotate(stack_a);
    ft_rotate(stack_b);
}

void    ft_rotate(t_stack **stack)
{
    t_stack *new_fst_node;
    t_stack *new_last_node;

    if (!(*stack) || !(*stack)->next)
        return ;
    new_fst_node = *stack;
    while (new_fst_node->next->next) //should I write != NULL?
        new_fst_node = new_fst_node->next;
    new_last_node = new_fst_node;
    new_fst_node = new_fst_node->next;
    new_fst_node->next = *stack;
    *stack = new_fst_node;
    new_last_node->next = NULL;
}