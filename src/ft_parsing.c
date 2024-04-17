/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:06:18 by mbriand           #+#    #+#             */
/*   Updated: 2024/04/17 21:20:02 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Do all inputs are differents? 
void	is_unique(int *argv_int, int argc, char **argv)
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
				prg_exit_ms(argv);
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
	char	**save_argv;

	save_argv = argv;
	number = 0;
	while (*argv)
	{
		number = ft_atol(*argv);
		if (number > INT_MAX || number < INT_MIN)
			prg_exit_ms(save_argv);
		argv++;
	}
}

// Do inputs are numbers?
void	is_number(char **argv)
{
	int		i;
	char	**save_argv;

	save_argv = argv;
	i = 0;
	while (*argv)
	{
		if (**argv == '\0')
			prg_exit_ms(save_argv);
		if (*(*argv + i) == '+' || *(*argv + i) == '-')
			i++;
		if (*(*argv + i) < '0' || *(*argv + i) > '9')
			prg_exit_ms(save_argv);
		while (*(*argv + i) != '\0')
		{
			if (ft_isdigit(*(*argv + i)) == 0)
				prg_exit_ms(save_argv);
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

	is_number(argv);
	is_integer(argv);
	argv_int = ft_array_atoi(argv, argc);
	is_unique(argv_int, argc, argv);
	free(argv_int);
}
