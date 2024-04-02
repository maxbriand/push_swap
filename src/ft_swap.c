/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:06:43 by mbriand           #+#    #+#             */
/*   Updated: 2024/04/02 17:06:44 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//swap on two stack
void    ft_both_swap(t_stack **stack_a, t_stack **stack_b)
{
    ft_swap_a(stack_a);
    ft_swap_b(stack_b);
}

void    ft_swap_b(t_stack **stack_b)
{
    t_stack    *store;
    t_stack    *deref_stack;
    
    deref_stack = *stack_b;
    if (!deref_stack || !deref_stack->next)
        return ;
    *stack_b = deref_stack->next;
    store = deref_stack->next->next;
    deref_stack->next->next = deref_stack;
    deref_stack->next = store;
	ft_printf("sb\n");
}

//push_move: 1st and snd element are reverse in the sended stack
void    ft_swap_a(t_stack **stack_a)
{
    t_stack    *store;
    t_stack    *deref_stack;
    
    deref_stack = *stack_a;
    if (!deref_stack || !deref_stack->next)
        return ;
    *stack_a = deref_stack->next;
    store = deref_stack->next->next;
    deref_stack->next->next = deref_stack;
    deref_stack->next = store;
	ft_printf("sa\n");
}
