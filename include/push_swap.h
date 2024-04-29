/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:53:21 by mbriand           #+#    #+#             */
/*   Updated: 2024/04/29 23:33:44 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "libft.h"

typedef struct s_stack
{
	int				number;
	int				index;
	struct s_stack	*next;
}					t_stack;

// Exit and free
void	ft_exit_failure(char **nbr_str, char **store_array, t_stack **stack_a);
void	prg_exit_ms(char **argv);
void	prg_exit_parsing(void);
void	ft_free_stack(t_stack **stack_a);
void	ft_free_strings(char **argv);

// Handle multiple strings
char	**ft_handle_multiple_strings(char **argv);
char	**ft_array_str_join(char **fst_array, char **snd_array);
int		ft_sc(char	**str);
int		ft_add_array(char **joined_array, char **old_array, int i);

// Parsing
void	ft_parsing(char **argv, int argc);

// Already sort stack
void	ft_is_sorted(char **argv);

// Convert strings to linked list
t_stack	*ft_strings_to_ll(char **strings);
t_stack	*ft_create_elem_two(int number);
int		ft_list_push_back_two(t_stack **begin_list, int number);

// Indexation
void	ft_indexation(t_stack **stack);

// other functions
int		my_strcmp(const char *s1, const char *s2);
int		*ft_array_atoi(char **argv, int argc);

// Sort small list of numbers (5 number max)
void	ft_sort_small_list(t_stack **stack_a, t_stack **stack_b, int argc);
void	ft_sort_two_elements(t_stack **stack);
void	ft_sort_three_elements(t_stack **stack_a);
void	ft_sort_four_elements(t_stack **stack_a, t_stack **stack_b, int nb);
void	ft_sort_five_elements(t_stack **stack_a, t_stack **stack_b);

// Radix algorithm (sort other list)
void	ft_sort_list(t_stack **stack_a, int argc);
void	ft_radix(t_stack **stack_a, t_stack **stack_b, int argc);
void	ft_binary_sort(t_stack **stk_a, t_stack **stk_b, int bin_i, int argc);
int		ft_max_binary_digit(int nbr);

// Stack movements
void	ft_swap_a(t_stack **stack_a);
void	ft_swap_b(t_stack **stack_b);
void	ft_both_swap(t_stack **stack_a, t_stack **stack_b);
void	ft_push_a(t_stack **stack_b, t_stack **stack_a);
void	ft_push_b(t_stack **stack_a, t_stack **stack_b);
void	ft_rotate_a(t_stack **stack_a);
void	ft_rotate_b(t_stack **stack_b);
void	ft_both_rotate(t_stack **stack_a, t_stack **stack_b);
void	ft_reverse_rotate_a(t_stack **stack_a);
void	ft_reverse_rotate_b(t_stack **stack_b);
void	ft_both_reverse_rotate(t_stack **stack_a, t_stack **stack_b);

#endif
