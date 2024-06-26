/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:06:33 by mbriand           #+#    #+#             */
/*   Updated: 2024/04/30 00:03:12 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// calculate using index max, what's the max binary digits
int	ft_max_binary_digit(int nbr)
{
	int	max;

	max = 1;
	while (nbr >= 1)
	{
		nbr /= 2;
		max++;
	}
	return (max);
}

static int	ft_stack_sorted_check(t_stack **stack_a)
{
	t_stack	*deref_stack_a;

	deref_stack_a = *stack_a;
	while (deref_stack_a->next)
	{
		if (deref_stack_a->index > deref_stack_a->next->index)
			return (0);
		deref_stack_a = deref_stack_a->next;
	}
	return (1);
}

void	ft_binary_sort(t_stack **stk_a, t_stack **stk_b, int bin_i, int argc)
{
	int	i;

	i = 0;
	while (i < argc && ft_stack_sorted_check(stk_a) == 0)
	{
		if (((((*stk_a)->index) >> bin_i) & 1) == 0)
			ft_push_b(stk_a, stk_b);
		else
			ft_rotate_a(stk_a);
		i++;
	}
	while (*stk_b != NULL)
		ft_push_a(stk_b, stk_a);
}

void	ft_radix(t_stack **stack_a, t_stack **stack_b, int argc)
{
	int	i;
	int	max;

	i = 0;
	max = ft_max_binary_digit(argc - 1);
	while (i < max && ft_stack_sorted_check(stack_a) == 0)
	{
		ft_binary_sort(stack_a, stack_b, i, argc);
		i++;
	}
}

void	ft_sort_list(t_stack **stack_a, int argc)
{
	t_stack	**stack_b;
	t_stack	*null_node_b;

	null_node_b = NULL;
	stack_b = &null_node_b;
	if (argc >= 2 && argc <= 5)
		ft_sort_small_list(stack_a, stack_b, argc);
	else
		ft_radix(stack_a, stack_b, argc);
}
