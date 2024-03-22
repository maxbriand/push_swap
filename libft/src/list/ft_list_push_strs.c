#include "libft.h"

// Convert an array of string in a linked list
t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*fst_node;
	t_list	*node_to_iterate;
	int		i;
	
	i = size - 2;
	while (i >= 0)
	{
		if (i < size - 2)
		{
			node_to_iterate->next = ft_create_elem(strs[i]);
			node_to_iterate = node_to_iterate->next;
		}
		else
			node_to_iterate = ft_create_elem(strs[i]);
		if (i == size - 2)
			fst_node = node_to_iterate; 
		i--;
	}
	return (fst_node);
}
