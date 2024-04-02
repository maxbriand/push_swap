/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:06:50 by mbriand           #+#    #+#             */
/*   Updated: 2024/04/02 17:06:51 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"
#include "libft.h"

int	ft_sc(char	**str)
{
	int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int ft_add_strs(char **strsjoined, char **strs, int i)
{
    int j;
    
    if  (strs == NULL)
        return (i);
    j = 0;
    while(strs[j] != NULL)
    {
        strsjoined[i] = strs[j];
        i++;
        j++;
    }
    free(strs);
    return (i); 
}

char	**ft_array_str_join(char **strsa, char **strsb)
{
	int		counter;
	int		i;
	char	**strsjoined;

    counter = ft_sc(strsa) + ft_sc(strsb) + 1;
	strsjoined = malloc(sizeof(char *) * counter);
    if (strsjoined == NULL)
        return (NULL);
	i = 0;
    i = ft_add_strs(strsjoined, strsa, i);
    i = ft_add_strs(strsjoined, strsb, i);
	strsjoined[i] = NULL;
	return (strsjoined);
}
char	**ft_handle_multiple_strings(char **argv)
{
	int		i;
	char	**new_argv;
	char	**store_array;

	i = 0;
	new_argv = NULL;
	while(argv[i])
	{
		store_array = ft_split(argv[i], ' ');
		new_argv = ft_array_str_join(new_argv, store_array);
		i++;
	}
	return (new_argv);
}

//max and MIN in the parsing
int main(int argc, char **argv)
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
// ADD FREE IN PARSING AND EVERYWHERE WHERE I CAN T STOP THE PROGRAM
	
	// handle that "" ""
	
	argc = ft_sc(argv);
	
	int f = 0;
	// while (argv[f])
	// {
	// 	ft_printf("str number %d is: %s\n", f, argv[f]);
	// 	f++;
	// }
	ft_parsing(argv, argc);
	ft_is_sorted(argv);
	fst_node = ft_strings_to_ll(argv);
	// free all argv
	ft_free_strings(argv);
	stack_a = &fst_node;
	ft_indexation(stack_a);
	ft_sort_list(stack_a, argc);
	ft_free_stack(stack_a);
	return(0);
}

//	delete this part
	// fst_node = *stack_a;
	// while(fst_node)
	// {
	// 	ft_printf("%d\n", fst_node->number);
	// 	// ft_printf("Stack_a value: %d\n", fst_node->index);
	// 	fst_node = fst_node->next;
	// }	
