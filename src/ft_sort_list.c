/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:06:33 by mbriand           #+#    #+#             */
/*   Updated: 2024/04/02 17:06:34 by mbriand          ###   ########.fr       */
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

void	ft_binary_sort(t_stack **stack_a, t_stack **stack_b, int bin_i, int argc)
{
	int	i;
	
	i = 0;
	while (i < argc)
	{
		if (((((*stack_a)->index) >> bin_i) & 1) == 0)
			ft_push_b(stack_a, stack_b);
		else
			ft_rotate_a(stack_a);
		i++;
	}
	while (*stack_b != NULL)
		ft_push_a(stack_b, stack_a);
}

void	ft_radix(t_stack **stack_a, t_stack **stack_b, int argc)
{
	int	i;
	int	max;

	i = 0;
	max = ft_max_binary_digit(argc - 1);
	while (i < max)
	{
		ft_binary_sort(stack_a, stack_b, i, argc);
		i++;
	}
}

void	ft_sort_list(t_stack **stack_a, int argc)
{
	t_stack **stack_b;
	t_stack *null_node_b;

    null_node_b = NULL;
	stack_b = &null_node_b;
	if ( argc >= 2 && argc <= 5)
		ft_sort_small_list(stack_a, stack_b, argc);
	else
	    ft_radix(stack_a, stack_b, argc);
}
