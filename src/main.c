/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:06:50 by mbriand           #+#    #+#             */
/*   Updated: 2024/04/29 16:59:18 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//max and MIN in the parsing
int	main(int argc, char **argv)
{
	t_stack	**stack_a;
	t_stack	*fst_node;
	int		i;

	argc -= 1;
	if (argc < 1)
		return (0);
	argv = ft_handle_multiple_strings(argv + 1);
	argc = ft_sc(argv);
	ft_parsing(argv, argc);
	ft_is_sorted(argv);
	fst_node = ft_strings_to_ll(argv);
	ft_free_strings(argv);
	stack_a = &fst_node;
	ft_indexation(stack_a);
	ft_sort_list(stack_a, argc);
	ft_free_stack(stack_a);
	return (0);
}
