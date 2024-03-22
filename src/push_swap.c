#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"
#include "libft.h"

// max and MIN in the parsing
int main(int argc, char **argv)
{
	t_stack	*stack_aa;
	t_stack	**stack_a;

	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		if (*argv == NULL)
			prg_exit();
	}
	else
	{
		argv++;
	}
	parsing(argv);
	stack_aa = ft_strings_to_ll(argv);
	// at this moment the string list is properly convert to ll
	stack_a = &stack_aa;
	
	t_stack	**stack_b;
	t_stack *stack_bb;
	
	stack_bb = ft_create_elem_two(83);
	stack_b = &stack_bb;
	
	ft_list_push_back_two(stack_b, 999);
	ft_list_push_back_two(stack_b, 944);
	ft_list_push_back_two(stack_b, 882);

	// rotate_a
	// ft_rotate(stack_a, stack_b);
	
	ft_printf("\nStack_a parts\n\n");
	while(*stack_a)
	{
		ft_printf("Stack_a value: %d\n", (*stack_a)->number);
		*stack_a = (*stack_a)->next;
	}

	ft_printf("\nStack_b parts\n\n");
	while(*stack_b)
	{
		ft_printf("Stack_b value: %d\n", (*stack_b)->number);
		*stack_b = (*stack_b)->next;
	}

	return(0);
}
