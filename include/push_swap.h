#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// delete forbidden include
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct	s_stack
{
	int				number;
	int				index;
	struct	s_stack	*next;
} 					t_stack;

t_stack	*ft_strings_to_ll(char **strings);
void	parsing(char **argv);
void	prg_exit(void);
t_stack	*ft_create_elem_two(int number);
void	ft_list_push_back_two(t_stack **begin_list, int number);
void	ft_list_push_front_two(t_stack **begin_list, int number);

// Stack movements
void   	ft_swap(t_stack **sended_stack);
void    ft_both_swap(t_stack **stack_a, t_stack **stack_b);
void    ft_push(t_stack **src, t_stack **dest);
void    ft_rotate(t_stack **stack);
void    ft_both_rotate(t_stack **stack_a, t_stack **stack_b);
void    ft_reverse_rotate(t_stack **stack);
void    ft_both_reverse_rotate(t_stack **stack_a, t_stack **stack_b);

#endif