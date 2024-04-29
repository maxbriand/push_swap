/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_multiple_strings.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:46:04 by mbriand           #+#    #+#             */
/*   Updated: 2024/04/30 00:02:26 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// 
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

// join the old_array with joined_array
int	ft_add_array(char **joined_array, char **old_array, int i)
{
	int	j;

	if (old_array == NULL)
		return (i);
	j = 0;
	while (old_array[j] != NULL)
	{
		joined_array[i] = old_array[j];
		i++;
		j++;
	}
	free(old_array);
	return (i);
}

// join two array of str
char	**ft_array_str_join(char **fst_array, char **snd_array)
{
	char	**joined_array;
	int		counter;
	int		i;

	counter = ft_sc(fst_array) + ft_sc(snd_array) + 1;
	joined_array = malloc(sizeof(char *) * counter);
	if (joined_array == NULL)
		return (NULL);
	i = 0;
	i = ft_add_array(joined_array, fst_array, i);
	i = ft_add_array(joined_array, snd_array, i);
	joined_array[i] = NULL;
	return (joined_array);
}

char	**ft_handle_multiple_strings(char **argv)
{
	int		i;
	char	**nbr_str;
	char	**save_nbr_str;
	char	**store_array;

	i = 0;
	nbr_str = NULL;
	while (argv[i])
	{
		store_array = ft_split(argv[i], ' ');
		if (store_array == NULL)
			ft_exit_failure(nbr_str, store_array, NULL);
		if (*store_array == NULL)
			ft_exit_failure(nbr_str, store_array, NULL);
		nbr_str = ft_array_str_join(nbr_str, store_array);
		if (nbr_str == NULL && i == 0)
			ft_exit_failure(nbr_str, store_array, NULL);
		if (nbr_str == NULL && i != 0)
			ft_exit_failure(save_nbr_str, store_array, NULL);
		save_nbr_str = nbr_str;
		i++;
	}
	return (nbr_str);
}
