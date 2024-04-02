/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:01:32 by mbriand           #+#    #+#             */
/*   Updated: 2024/04/02 18:01:33 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Nodes counter
int	ft_list_size(t_list *begin_list)
{
	int	i;

	i = 0;
	while (begin_list != NULL)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

/* // Main where I created nodes
int	main(void)
{
	t_list	*bloc1;
	t_list	*bloc2;
	t_list	*bloc3;

	int		data1 = 55;
	int		data2 = 66;
	int		data3 = 77;

	bloc1 = malloc(sizeof(t_list));
	bloc2 = malloc(sizeof(t_list));
	bloc3 = malloc(sizeof(t_list));
	
	bloc1->data = &data1;
	bloc1->next = bloc2;
	bloc2->data = &data2;
	bloc2->next = bloc3;
	bloc3->data = &data3;
	bloc3->next = NULL;

	printf("%d\n", ft_list_size(bloc1));

	t_list	*bloc4 = malloc(sizeof(t_list));
	int 	data4 = 89;
	bloc3->next = bloc4;
	bloc4->data = &data4;
	bloc4->next = NULL;
	
	printf("%d\n", ft_list_size(bloc1));	
	return (0);
}*/
