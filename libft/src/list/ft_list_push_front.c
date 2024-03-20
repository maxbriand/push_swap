#include "libft.h"

// Push an element at the beginning of the list
void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*bloc1;

	if (begin_list == NULL)
	{
		*begin_list = ft_create_elem(data);
	}
	else
	{
		bloc1 = ft_create_elem(data);
		bloc1->next = *begin_list;
		*begin_list = bloc1;
	}
}

// Empty list
// int main(void)
// 	{
// 	t_list	*bloc1;
// 	int		value1;

// 	value1 = 89;
// 	bloc1 = NULL;
// 	ft_list_push_front(&bloc1, &value1);
// 	while (bloc1 != NULL)
// 	{
// 		printf("%d\n", *(int *)bloc1->data);
// 		bloc1 = bloc1->next;
// 	}
// 	return (0);
// }

/* //None empty list
int	main(void)
{
	int		value1;
	int		value2;
	int		value3;
	t_list	*bloc2;
	t_list	*bloc3;

	value1 = 22;
	value2 = 33;
	value3 = 44;
	bloc2 = malloc(sizeof(t_list));
	bloc3 = malloc(sizeof(t_list));

	bloc3 = ft_create_elem(&value3);
	bloc2->data = &value2;
	bloc2->next = bloc3;
	printf("Before the function:\n\n");
	while (bloc2 != NULL)
	{
		printf("Bloc x: %d\n", *(int *)bloc2->data);
		bloc2 = bloc2->next;
	}
	printf("\n");

	ft_list_push_front(&bloc2, &value1);
	printf("After the function:\n\n");
	while (bloc2 != NULL)
	{
		printf("Bloc x: %d\n", *(int *)bloc2->data);
		bloc2 = bloc2->next;
	}
	printf("\n");
	return (0);
}*/
