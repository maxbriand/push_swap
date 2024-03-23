#include "push_swap.h"

void	ft_indexation(t_stack **stack)
{
    int     index;
    t_stack *reference;
    t_stack *candidate;

    reference = *stack;
    while (reference)
    {

        index = 0;
        candidate = *stack;
        while (candidate)
        {
            if (reference->number > candidate->number)
                index++;
            candidate = candidate->next;
        }
        reference->index = index;
        reference = reference->next;
    }
}

