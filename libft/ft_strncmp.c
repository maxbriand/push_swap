/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 23:29:54 by mbriand           #+#    #+#             */
/*   Updated: 2024/03/05 20:55:56 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// compare n bytes/numbers of 2 strings

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}
#include <stdio.h>
#include <string.h>
int main(void) 
{
	int result;

	result = strncmp("test\200", "test\0", (size_t)6);
	printf("The result is: %d\n", result);

	result = ft_strncmp("test\200", "test\0", (size_t)6);
	printf("The result is: %d", result);
	return (0);
}