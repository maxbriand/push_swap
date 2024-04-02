/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:02:53 by mbriand           #+#    #+#             */
/*   Updated: 2024/04/02 18:02:53 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Add a node at the end of the linked list
void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*node4;
	t_list	*deref_begin_list;

	deref_begin_list = *begin_list;
	node4 = ft_create_elem(data);
	node4->data = data;
	while (deref_begin_list->next != NULL)
		deref_begin_list = deref_begin_list->next;
	deref_begin_list->next = node4;
}

/* 
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	int		value1 = 10;
	int		value2 = 20;
	int		value3 = 30;
	int		value4 = 40;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));

	node1->data = &value1;
	node2->data = &value2;
	node3->data = &value3;

	node1->next = node2;
	node2->next = node3;

	ft_list_push_back(&node1, &value4);

	while (node1 != NULL)
	{
		printf("%d\n", *(int *)node1->data);
		node1 = node1->next;
	}
	return (0);
}*/
