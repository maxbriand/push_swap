#include "libft.h"

// All elements in the list are reverse
void	ft_list_reverse(t_list **begin_list)
{
	t_list	*next_one;
	t_list	*current_node;
	t_list	*prev;

	current_node = *begin_list;
	prev = NULL;
	while (current_node != NULL)
	{
		next_one = current_node->next; // nex_one data 20 // 30
		current_node->next = prev; // current_node next data NULL // 10
		prev = current_node; // prev data 10 // 20
		current_node = next_one; // current_node 20 // 30
	}
}

// create 4 nodes
// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	//t_list	*node4;

// 	int		value1 = 10;
// 	int		value2 = 20;
// 	int		value3 = 30;
// 	int		value4 = 40;

// 	node1 = malloc(sizeof(t_list));
// 	if (node1 == NULL)
// 		return (0);
// 	node2 = malloc(sizeof(t_list));
// 	if (node2 == NULL)
// 		return (0);
// 	node3 = malloc(sizeof(t_list));
// 	if (node3 == NULL)
// 		return (0);
// 	/*node4 = malloc(sizeof(t_list));
// 	if (node4 == NULL)
// 		return (0);
// */
// 	node1->data = &value1;
// 	node2->data = &value2;
// 	node3->data = &value3;
// //	node4->data = &value4;

// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
// //	node4->next = NULL;

// 	ft_list_reverse(&node1);
// 	while (node3)
// 	{
// 		printf("%d\n", *(int*)node3->data);
// 		node3 = node3->next;
// 	}
// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	//	free(node4);
// 	return (0);
// }
