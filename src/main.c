/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:06:50 by mbriand           #+#    #+#             */
/*   Updated: 2024/04/02 17:52:02 by mbriand          ###   ########.fr       */
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
	if (*argv == NULL)
		prg_exit();
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
	// free all argv
// ADD FREE IN PARSING AND EVERYWHERE WHERE I CAN T STOP THE PROGRAM

// test the new array of string
	//int	f = 0;
	// while (argv[f])
	// {
	// 	ft_printf("str number %d is: %s\n", f, argv[f]);
	// 	f++;
	// }

//	delete this part
	// fst_node = *stack_a;
	// while(fst_node)
	// {
	// 	ft_printf("%d\n", fst_node->number);
	// 	// ft_printf("Stack_a value: %d\n", fst_node->index);
	// 	fst_node = fst_node->next;
	// }	
