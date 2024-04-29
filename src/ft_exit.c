/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:26:37 by mbriand           #+#    #+#             */
/*   Updated: 2024/04/29 23:33:06 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	ft_free_strings(char **nbr_str)
{
	int	i;

	i = 0;
	while (nbr_str[i])
	{
		free(nbr_str[i]);
		i++;
	}
	free(nbr_str);
}

void	ft_exit_failure(char **nbr_str, char **store_array, t_stack **stack_a)
{
	if (store_array != NULL)
		ft_free_strings(store_array);
	if (nbr_str != NULL)
		ft_free_strings(nbr_str);
	if (stack_a != NULL)
		ft_free_stack(stack_a);
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}
