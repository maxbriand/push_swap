/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 23:24:20 by mbriand           #+#    #+#             */
/*   Updated: 2023/12/03 00:28:27 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_str(char *s)
{
	int	i;

	if (!s)
	{
		ft_print_str("(null)");
		return (6);
	}
	i = 0;
	while (s[i])
	{
		ft_print_char(s[i]);
		i++;
	}
	return (i);
}
