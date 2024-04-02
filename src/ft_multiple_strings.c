/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_multiple_strings.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:46:04 by mbriand           #+#    #+#             */
/*   Updated: 2024/04/02 17:48:56 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sc(char	**str)
{
	int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_add_strs(char **strsjoined, char **strs, int i)
{
	int	j;

	if (strs == NULL)
		return (i);
	j = 0;
	while (strs[j] != NULL)
	{
		strsjoined[i] = strs[j];
		i++;
		j++;
	}
	free(strs);
	return (i);
}

char	**ft_array_str_join(char **strsa, char **strsb)
{
	int		counter;
	int		i;
	char	**strsjoined;

	counter = ft_sc(strsa) + ft_sc(strsb) + 1;
	strsjoined = malloc(sizeof(char *) * counter);
	if (strsjoined == NULL)
		return (NULL);
	i = 0;
	i = ft_add_strs(strsjoined, strsa, i);
	i = ft_add_strs(strsjoined, strsb, i);
	strsjoined[i] = NULL;
	return (strsjoined);
}

char	**ft_handle_multiple_strings(char **argv)
{
	int		i;
	char	**new_argv;
	char	**store_array;

	i = 0;
	new_argv = NULL;
	while (argv[i])
	{
		store_array = ft_split(argv[i], ' ');
		new_argv = ft_array_str_join(new_argv, store_array);
		i++;
	}
	return (new_argv);
}
