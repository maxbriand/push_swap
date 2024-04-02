/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:17:53 by mbriand           #+#    #+#             */
/*   Updated: 2024/04/02 18:34:57 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// exit error
void	prg_exit(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

// The classic strcmp return only -1, 0, 1
int	my_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}

int	*ft_array_atoi(char **argv, int argc)
{
	int	*argv_int;
	int	i;

	argv_int = malloc(sizeof(int *) * argc);
	if (argv_int == NULL)
		prg_exit();
	i = 0;
	while (argv[i])
	{
		argv_int[i] = ft_atoi(argv[i]);
		i++;
	}
	return (argv_int);
}
