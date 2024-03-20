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

/* // Create an array of 4 string + a NULL array
// I consider that size included the null element
int	main(void)
{
	char	string1[] = "string1";
	char	string2[] = "string2";
	char	string3[] = "string3";
	char	string4[] = "string4";

	char	**strs;
	int		size_strs = 5;
	strs = malloc(sizeof(char *) * size_strs);
	strs[0] = string1;
	strs[1] = string2;
	strs[2] = string3;
	strs[3] = string4;
	strs[4] = NULL;

	t_list	*fst_node = malloc(sizeof(t_list));
	fst_node = ft_list_push_strs(size_strs, strs);
	while (fst_node != NULL)
	{
		printf("%s\n", (char *)fst_node->data);
		fst_node = fst_node->next;
	}
	return (0);
}*/
