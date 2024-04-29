/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings_to_ll.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:06:39 by mbriand           #+#    #+#             */
/*   Updated: 2024/04/30 00:02:58 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Create an element of the list
t_stack	*ft_create_elem_two(int number)
{
	t_stack	*pt_new_elem;

	pt_new_elem = malloc(sizeof(t_stack));
	if (pt_new_elem == 0)
		return (NULL);
	pt_new_elem->next = NULL;
	pt_new_elem->number = number;
	return (pt_new_elem);
}

// Add a node at the end of the linked list
int	ft_list_push_back_two(t_stack **begin_list, int number)
{
	t_stack	*node4;
	t_stack	*deref_begin_list;

	deref_begin_list = *begin_list;
	node4 = ft_create_elem_two(number);
	if (node4 == NULL)
		return (0);
	node4->number = number;
	while (deref_begin_list->next != NULL)
		deref_begin_list = deref_begin_list->next;
	deref_begin_list->next = node4;
	return (1);
}

// convert strings to linked list
t_stack	*ft_strings_to_ll(char **nbr_str)
{
	t_stack	*stack_a;
	char	**store_nbr_str;
	int		nbr;
	int		check_error;

	store_nbr_str = nbr_str;
	nbr = ft_atoi(*nbr_str);
	stack_a = ft_create_elem_two(nbr);
	if (stack_a == NULL)
		ft_exit_failure(nbr_str, NULL, NULL);
	nbr_str++;
	while (*nbr_str)
	{
		nbr = ft_atoi(*nbr_str);
		check_error = ft_list_push_back_two(&stack_a, nbr);
		if (check_error == 0)
			ft_exit_failure(store_nbr_str, NULL, &stack_a);
		nbr_str++;
	}
	return (stack_a);
}
