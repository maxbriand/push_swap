#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"
#include "libft.h"

// max and MIN in the parsing
int main(int argc, char **argv)
{
	t_pslist	*stack_a;
	
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
	stack_a = strings_to_ll(argv);
	while (stack_a)
	{
		ft_printf("%d", *stack_a->number);
		stack_a = stack_a->next;
	}
	return(0);
}
