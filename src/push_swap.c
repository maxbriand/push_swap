#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"
#include "libft.h"

//max and MIN in the parsing
int main(int argc, char **argv)
{
	t_stack	*stack_aa;
	t_stack	**stack_a;
	t_stack	**stack_b;
	t_stack	*null_node_b;

	// argc correction 
	argc -= 1;
	if (argc < 1)
		return (0);
	if (argc == 1)
	{
		argv = ft_split(argv[1], ' ');
		if (*argv == NULL)
			prg_exit();
	}
	else
	{
		argv++;
	}

	parsing(argv, argc);
	stack_aa = ft_strings_to_ll(argv);
		
	// at this moment the string list is properly convert to ll
	stack_a = &stack_aa;
	ft_indexation(stack_a);

	null_node_b = NULL;
	stack_b = &null_node_b;

	if (argc <= 5 && argc >= 2)
		ft_sort_small_list(stack_a, stack_b, argc);
	// else
	// 	ft_radix(stack_a, stack_b);
	
	// free stacks
	return(0);
}

	// stack_aa = *stack_a;
	// ft_printf("\nStack_a parts\n\n");
	// while(stack_aa)
	// {
	// 	ft_printf("Stack_a value: %d\n", stack_aa->number);
	// 	// ft_printf("Stack_a value: %d\n", stack_aa->index);
	// 	stack_aa = stack_aa->next;
	// }
