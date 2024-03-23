#include "push_swap.h"

void    ft_both_rotate(t_stack **stack_a, t_stack **stack_b)
{
    ft_rotate_a(stack_a);
    ft_rotate_b(stack_b);
}

void    ft_rotate_b(t_stack **stack_b)
{
    t_stack *new_fst_node;
    t_stack *new_last_node;

    if (!(*stack_b) || !(*stack_b)->next)
        return ;
    new_fst_node = *stack_b;
    while (new_fst_node->next->next)
        new_fst_node = new_fst_node->next;
    new_last_node = new_fst_node;
    new_fst_node = new_fst_node->next;
    new_fst_node->next = *stack_b;
    *stack_b = new_fst_node;
    new_last_node->next = NULL;
	ft_printf("rb\n");
}

void    ft_rotate_a(t_stack **stack_a)
{
    t_stack *new_fst_node;
    t_stack *new_last_node;

    if (!(*stack_a) || !(*stack_a)->next)
        return ;
    new_fst_node = *stack_a;
    while (new_fst_node->next->next)
        new_fst_node = new_fst_node->next;
    new_last_node = new_fst_node;
    new_fst_node = new_fst_node->next;
    new_fst_node->next = *stack_a;
    *stack_a = new_fst_node;
    new_last_node->next = NULL;
	ft_printf("ra\n");
}
