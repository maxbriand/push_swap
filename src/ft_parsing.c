/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:06:18 by mbriand           #+#    #+#             */
/*   Updated: 2024/04/02 17:52:29 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Do all inputs are differents? 
void	is_unique(int *argv_int, int argc)
{
	int	i;
	int	j;

	i = 0;
	while (i + 1 < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (argv_int[i] == argv_int[j])
			{
				free(argv_int);
				prg_exit();
			}
			j++;
		}
		i++;
	}
}

// Do all inputs are integers?
void	is_integer(char **argv)
{
	long	number;

	number = 0;
	while (*argv)
	{
		number = ft_atol(*argv);
		if (number > INT_MAX || number < INT_MIN)
			prg_exit();
		argv++;
	}
}

// Do inputs are numb1ers?
void	is_number(char **argv)
{
	int	i;

	i = 0;
	while (*argv)
	{
		if (**argv == '\0')
			prg_exit();
		if (*(*argv + i) == '+' || *(*argv + i) == '-')
		{
			if (*(*argv + 1) == '+' || *(*argv + 1) == '-')
				prg_exit();
			i++;
		}
		while (*(*argv + i) != '\0')
		{
			if (ft_isdigit(*(*argv + i)) == 0)
				prg_exit();
			i++;
		}
		i = 0;
		argv++;
	}
}

// check if it's only different int
void	ft_parsing(char **argv, int argc)
{
	int	*argv_int;

	if (*argv == NULL)
		exit(EXIT_SUCCESS);
	is_number(argv);
	is_integer(argv);
	argv_int = ft_array_atoi(argv, argc);
	is_unique(argv_int, argc);
	free(argv_int);
}
