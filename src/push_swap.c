#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"
#include "libft.h"



// max and MIN in the parsing
// int main(int argc, char **argv)
// {
// 	t_stack	*stack_aa;
// 	t_stack	**stack_a;

// 	// argc correction 
// 	argc -= 1;
// 	if (argc < 1)
// 		return (0);
// 	if (argc == 1)
// 	{
// 		argv = ft_split(argv[1], ' ');
// 		if (*argv == NULL)
// 			prg_exit();
// 	}
// 	else
// 	{
// 		argv++;
// 	}

// 	parsing(argv, argc);
// 	stack_aa = ft_strings_to_ll(argv);
		
// 	// at this moment the string list is properly convert to ll
// 	stack_a = &stack_aa;
// 	ft_indexation(stack_a);


// 	// t_stack **stack_b;
// 	// t_stack *stack_bb;
// 	// stack_b = &stack_bb;

// 	if (argc <= 5 && argc >= 2)
// 		ft_sort_small_list(stack_a, argc);
// // stop the algo at this moment for these numbers and argc = 2


// 	stack_aa = *stack_a;

// 	ft_printf("\nStack_a parts\n\n");
// 	while(stack_aa)
// 	{
// 		ft_printf("Stack_a value: %d\n", stack_aa->number);
// 		ft_printf("Stack_a value: %d\n", stack_aa->index);
// 		stack_aa = stack_aa->next;
// 	}

// 	return(0);
// }
