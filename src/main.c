#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"
#include "libft.h"

//max and MIN in the parsing
int main(int argc, char **argv)
{
	t_stack	**stack_a;
	t_stack	*fst_node;
	
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
		argv++;

	ft_parsing(argv, argc);
	ft_is_sorted(argv);
	fst_node = ft_strings_to_ll(argv);
	stack_a = &fst_node;
	ft_indexation(stack_a);
	ft_sort_list(stack_a, argc);
	
	
	// should I free something??
	ft_free_stack(stack_a);


//	delete this part
	// fst_node = *stack_a;
	// while(fst_node)
	// {
	// 	ft_printf("%d\n", fst_node->number);
	// 	// ft_printf("Stack_a value: %d\n", fst_node->index);
	// 	fst_node = fst_node->next;
	// }	

	return(0);
}

