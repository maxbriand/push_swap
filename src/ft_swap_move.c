#include "push_swap.h"

// swap on two stack
// void    ft_double_swap(t_stack* stack_a, t_stack* stack_b)
// {
//     ft_swap(stack_a);
//     ft_swap(stack_b);
// }

// push_move: 1st and snd element are reverse in the sended stack
void    ft_swap(t_stack **sended_stack)
{
    t_stack    *store;
    t_stack    *deref_stack;
    
    deref_stack = *sended_stack;
    if (!deref_stack || !deref_stack->next)
        return ;
    *sended_stack = deref_stack->next;
    store = deref_stack->next->next;
    deref_stack->next->next = deref_stack;
    deref_stack->next = store;
}
