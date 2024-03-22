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
	ft_create

	ft_swap(stack_a);
	ft_

	// test
	while (*stack_a)
	{
		ft_printf("%d\n", (* stack_a)->number);
		*stack_a = (* stack_a)->next;
	}
	return(0);
}
