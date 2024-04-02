/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:05:57 by mbriand           #+#    #+#             */
/*   Updated: 2024/04/02 17:09:52 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_strings(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}

void	ft_free_stack(t_stack **stack_a)
{
	t_stack	*store;

	while ((*stack_a)->next)
	{
		store = *stack_a;
		*stack_a = (*stack_a)->next;
		free(store);
	}
	free(*stack_a);
}
