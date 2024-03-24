#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// delete forbidden include before pushing
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

typedef struct	s_stack
{
	int				number;
	int				index;
	struct	s_stack	*next;
} 					t_stack;

// other functions
t_stack	*ft_strings_to_ll(char **strings);
void	parsing(char **argv, int argc);
void	prg_exit(void);
t_stack	*ft_create_elem_two(int number);
void	ft_list_push_back_two(t_stack **begin_list, int number);
void	ft_indexation(t_stack **stack);

// Stack movements
void	ft_swap_a(t_stack **stack_a);
void	ft_swap_b(t_stack **stack_b);
void    ft_both_swap(t_stack **stack_a, t_stack **stack_b);

void    ft_push_a(t_stack **stack_b, t_stack **stack_a);
void    ft_push_b(t_stack **stack_a, t_stack **stack_b);

void    ft_rotate_a(t_stack **stack_a);
void    ft_rotate_b(t_stack **stack_b);
void    ft_both_rotate(t_stack **stack_a, t_stack **stack_b);

void    ft_reverse_rotate_a(t_stack **stack_a);
void    ft_reverse_rotate_b(t_stack **stack_b);
void    ft_both_reverse_rotate(t_stack **stack_a, t_stack **stack_b);

// Sort small list of numbers
void    ft_sort_small_list(t_stack **stack_a, t_stack **stack_b, int argc);
void    ft_sort_two_elements(t_stack **stack);
void    ft_sort_three_elements(t_stack **stack_a);
void    ft_sort_four_elements(t_stack **stack_a, t_stack **stack_b);
void    ft_sort_five_elements(t_stack **stack_a, t_stack **stack_b);

#endif
