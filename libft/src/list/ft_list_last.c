/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:03:55 by mbriand           #+#    #+#             */
/*   Updated: 2024/04/02 18:04:13 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Return the last node of the linked list
t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list->next != NULL)
		begin_list = begin_list->next;
	return (begin_list);
}

/*// Two tests, 1 with 3 nodes and another with 4
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	int		data1 = 55;
	int		data2 = 66;
	int		data3 = 77;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));
	
	node1->data = &data1;
	node1->next = node2;
	node2->data = &data2;
	node2->next = node3;
	node3->data = &data3;
	node3->next = NULL;

	t_list	*return1 = ft_list_last(node1);
	printf("%d\n", *(int *)return1->data);

	t_list	*node4 = malloc(sizeof(t_list));
	int 	data4 = 89;
	node3->next = node4;
	node4->data = &data4;
	node4->next = NULL;

	t_list	*return2 = ft_list_last(node1);
	printf("%d\n", *(int *)return2->data);
	return (0);
}*/
