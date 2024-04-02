/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:06:23 by mbriand           #+#    #+#             */
/*   Updated: 2024/04/02 17:31:34 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// the minimum requirements for empty stack_b are:
	// - *stack_b = null pointer
	// - stack_b = the adress of this null pointer

void	ft_push_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*new_fst_node;

	if (!(*stack_a))
		return ;
	new_fst_node = (*stack_a)->next;
	if (!(*stack_b))
		(*stack_a)->next = NULL;
	else
		(*stack_a)->next = (*stack_b);
	*stack_b = *stack_a;
	*stack_a = new_fst_node;
	ft_printf("pb\n");
}

void	ft_push_a(t_stack **stack_b, t_stack **stack_a)
{
	t_stack	*new_fst_node;

	if (!(*stack_b))
		return ;
	new_fst_node = (*stack_b)->next;
	if (!(*stack_a))
		(*stack_b)->next = NULL;
	else
		(*stack_b)->next = (*stack_a);
	*stack_a = *stack_b;
	*stack_b = new_fst_node;
	ft_printf("pa\n");
}

/*int	main(void)
{
	t_stack **stack_a;
	t_stack **stack_b;
	t_stack *stack_aa;
	t_stack *stack_bb;
	t_stack *ite_a;
	t_stack *ite_b;

	stack_aa = ft_create_elem_two(888);
	stack_a = &stack_aa;
	ft_list_push_back_two(stack_a, 44);
	ft_list_push_back_two(stack_a, 33);
	ft_list_push_back_two(stack_a, 4994);
	
	stack_bb = NULL;
	stack_b = &stack_bb;

	printf("\nBEFORE PUSH B\n");

	ite_a = *stack_a;
	ite_b = *stack_b;
	while (ite_a)
	{
		printf("%d\n", ite_a->number);
		ite_a = ite_a->next;
	}
	printf("\n\n");
	while (ite_b)
	{
		printf("%d\n", ite_b->number);
		ite_b = ite_b->next;
	}

	ft_push_b(stack_a, stack_b);
	ft_push_b(stack_a, stack_b);
	ft_push_a(stack_a, stack_b);
	ft_push_b(stack_a, stack_b);

	printf("\nAFTER PUSH B\n");

	ite_a = *stack_a;
	ite_b = *stack_b;
	while (ite_a)
	{
		printf("%d\n", ite_a->number);
		ite_a = ite_a->next;
	}
	printf("\n\n");
	while (ite_b)
	{
		printf("%d\n", ite_b->number);
		ite_b = ite_b->next;
	}
	return(0);
}*/
