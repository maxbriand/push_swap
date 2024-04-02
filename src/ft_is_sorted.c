/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:06:14 by mbriand           #+#    #+#             */
/*   Updated: 2024/04/02 17:06:15 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_is_sorted(char **argv)
{
    int     i;

    i = 0;
    while (argv[i + 1])
    {
        if (ft_atoi(argv[i]) > ft_atoi(argv[i + 1]))
            return ;
        i++;
    }
    exit(EXIT_SUCCESS);
}