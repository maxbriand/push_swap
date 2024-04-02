/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:06:29 by mbriand           #+#    #+#             */
/*   Updated: 2024/04/02 17:06:30 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_both_rotate(t_stack **stack_a, t_stack **stack_b)
{
    ft_rotate_a(stack_a);
    ft_rotate_b(stack_b);
}

void    ft_rotate_b(t_stack **stack_b)
{
    t_stack *new_last_node;
    t_stack *old_last_node;

    if (!(*stack_b) || !(*stack_b)->next)
        return ;
    new_last_node = *stack_b;
    *stack_b = (*stack_b)->next;
    old_last_node = *stack_b;
    while (old_last_node->next)
        old_last_node = old_last_node->next;
    old_last_node->next = new_last_node;
    new_last_node->next = NULL;
	ft_printf("rb\n");
}

void    ft_rotate_a(t_stack **stack_a)
{
    t_stack *new_last_node;
    t_stack *old_last_node;

    if (!(*stack_a) || !(*stack_a)->next)
        return ;
    new_last_node = *stack_a;
    *stack_a = (*stack_a)->next;
    old_last_node = *stack_a;
    while (old_last_node->next)
        old_last_node = old_last_node->next;
    old_last_node->next = new_last_node;
    new_last_node->next = NULL;
    ft_printf("ra\n");
}
