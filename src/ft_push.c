/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:06:23 by mbriand           #+#    #+#             */
/*   Updated: 2024/04/29 16:56:44 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*new_fst_node;

	if (!(*stack_a))
		return ;
	new_fst_node = (*stack_a)->next;
	if (!(*stack_b))
		(*stack_a)->next = NULL;
	else
		(*stack_a)->next = (*stack_b);
	*stack_b = *stack_a;
	*stack_a = new_fst_node;
	ft_printf("pb\n");
}

void	ft_push_a(t_stack **stack_b, t_stack **stack_a)
{
	t_stack	*new_fst_node;

	if (!(*stack_b))
		return ;
	new_fst_node = (*stack_b)->next;
	if (!(*stack_a))
		(*stack_b)->next = NULL;
	else
		(*stack_b)->next = (*stack_a);
	*stack_a = *stack_b;
	*stack_b = new_fst_node;
	ft_printf("pa\n");
}
