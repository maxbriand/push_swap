#include "push_swap.h"

void    ft_sort_two_elements(t_stack **stack_a)
{
    if (((*stack_a)->index) > ((*stack_a)->next->index))
        ft_swap_a(stack_a);
}

void    ft_sort_three_elements(t_stack **stack_a)
{
    int i;
    
    i = 0;
    if ((*stack_a)->index != 2)
        ft_rotate_a(stack_a);
    if ((*stack_a)->index == 2)
    {
        ft_reverse_rotate_a(stack_a);
        ft_sort_two_elements(stack_a);
    }
    else
        ft_sort_two_elements(stack_a);
}

void    ft_sort_four_elements(t_stack **stack_a, t_stack **stack_b)  
{
    while ((*stack_a)->index != 3)
        ft_rotate_a(stack_a);
    ft_push_b(stack_a, stack_b);
    ft_sort_three_elements(stack_a);
    ft_push_a(stack_b, stack_a);
    ft_reverse_rotate_a(stack_a);
}

void    ft_sort_five_elements(t_stack **stack_a, t_stack **stack_b)  
{
    while ((*stack_a)->index != 4 && (*stack_a)->index != 3)
        ft_rotate_a(stack_a);
    ft_push_b(stack_a, stack_b);
    while ((*stack_a)->index != 4 && (*stack_a)->index != 3)
        ft_rotate_a(stack_a);
    ft_push_b(stack_a, stack_b);
    ft_sort_three_elements(stack_a);    
    ft_sort_two_elements(stack_b);
    ft_push_a(stack_b, stack_a);
    ft_reverse_rotate_a(stack_a);
    ft_push_a(stack_b, stack_a);
    ft_reverse_rotate_a(stack_a);
}

void    ft_sort_small_list(t_stack **stack_a, t_stack **stack_b, int argc)
{
    if (argc == 2)
        ft_sort_two_elements(stack_a);
    else if (argc == 3)
        ft_sort_three_elements(stack_a);
    else if (argc == 4)
        ft_sort_four_elements(stack_a, stack_b);
    else if (argc == 5)
        ft_sort_five_elements(stack_a, stack_b);
}