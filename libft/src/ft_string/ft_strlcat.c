/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 23:29:27 by mbriand           #+#    #+#             */
/*   Updated: 2023/11/27 20:54:06 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size = taille de dst apres cat sans \0 character
// dst = string 1
// src = string 2
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	l_dst;
	int		save_ltotal;
	int		i;

	if (dst == NULL && size == 0)
		return (size + ft_strlen(src));
	l_dst = ft_strlen(dst);
	if (size <= l_dst)
		return (size + ft_strlen(src));
	save_ltotal = ft_strlen(dst) + ft_strlen(src);
	i = 0;
	while (l_dst < size - 1 && src[i])
	{
		dst[l_dst] = src[i];
		l_dst++;
		i++;
	}
	dst[l_dst] = '\0';
	return (save_ltotal);
}

/*int main(void)
{
	// My function
	char dest[30]; 
	memset(dest, 0, 30);
	char *src = "AAAAAAAAA";
	dest[0] = 'B';
	
	printf("Test number 1:\n");
	size_t r1 = ft_strlcat(dest, src, -1);
	printf("%ld\n", r1);
	printf("%s\n", dest);
	
	// Copy Part
	char dest1[30]; 
	memset(dest1, 0, 30);
	char *src1 = "AAAAAAAAA";
	dest1[0] = 'B';

	printf("\nTest copy 1:\n");
	size_t r2 = ft_strlcatcp(dest1, src1, -1);
	printf("%ld\n", r2);
	printf("%s\n", dest1);
}*/
