/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:06:36 by mbriand           #+#    #+#             */
/*   Updated: 2024/04/03 17:11:00 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_two_elements(t_stack **stack_a)
{
	if (((*stack_a)->index) > ((*stack_a)->next->index))
		ft_swap_a(stack_a);
}

void	ft_sort_three_elements(t_stack **stack_a)
{
	if ((*stack_a)->index > (*stack_a)->next->index)
	{
		if ((*stack_a)->index > (*stack_a)->next->next->index)
			ft_rotate_a(stack_a);
	}
	else
	{
		if ((*stack_a)->next->index > (*stack_a)->next->next->index)
			ft_reverse_rotate_a(stack_a);
	}
	ft_sort_two_elements(stack_a);
}

void	ft_sort_four_elements(t_stack **stack_a, t_stack **stack_b, int nb)
{
	if ((*stack_a)->index == nb)
		ft_push_b(stack_a, stack_b);
	else if ((*stack_a)->next->index == nb)
	{
		ft_swap_a(stack_a);
		ft_push_b(stack_a, stack_b);
	}
	else if ((*stack_a)->next->next->index == nb)
	{
		ft_reverse_rotate_a(stack_a);
		ft_reverse_rotate_a(stack_a);
		ft_push_b(stack_a, stack_b);
	}
	else
	{
		ft_reverse_rotate_a(stack_a);
		ft_push_b(stack_a, stack_b);
	}
	ft_sort_three_elements(stack_a);
	ft_push_a(stack_b, stack_a);
}

void	ft_sort_five_elements(t_stack **stack_a, t_stack **stack_b)
{
	while ((*stack_a)->index != 0)
		ft_reverse_rotate_a(stack_a);
	ft_push_b(stack_a, stack_b);
	ft_sort_four_elements(stack_a, stack_b, 1);
	ft_push_a(stack_b, stack_a);
}

void	ft_sort_small_list(t_stack **stack_a, t_stack **stack_b, int argc)
{
	if (argc == 2)
		ft_sort_two_elements(stack_a);
	else if (argc == 3)
		ft_sort_three_elements(stack_a);
	else if (argc == 4)
		ft_sort_four_elements(stack_a, stack_b, 0);
	else if (argc == 5)
		ft_sort_five_elements(stack_a, stack_b);
}
