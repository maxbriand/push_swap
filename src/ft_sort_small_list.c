#include "push_swap.h"

void    ft_sort_two_elements(t_stack **stack_a)
{
    if (((*stack_a)->number) > ((*stack_a)->next->number))
        ft_swap_a(stack_a);
}

// void    ft_sort_three_elements(t_stack **stack_a)
// {
    

// }

void    ft_sort_small_list(t_stack **stack_a, int argc)
{
    if (argc == 3)
        ft_sort_two_elements(stack_a);
    // else if (argc == 4)
    //     ft_sort_three_elements(stack);
    // else if (argc == 5)
    //     ft_sort_four_elements(stack);
    // else if (argc == 6)
    //     ft_sort_five_elements(stack);
}