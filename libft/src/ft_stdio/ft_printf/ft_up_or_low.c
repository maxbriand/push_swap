/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_up_or_low.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 20:49:51 by mbriand           #+#    #+#             */
/*   Updated: 2023/12/02 21:02:50 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static size_t	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

// static size_t	ft_strlcpy(char *dst, const char *src, size_t size)
// {
// 	size_t	i;

// 	i = 0;
// 	if (size <= 0)
// 		return (ft_strlen(src));
// 	while (i < size - 1 && src[i])
// 	{
// 		dst[i] = src[i];
// 		i++;
// 	}
// 	dst[i] = '\0';
// 	return (ft_strlen(src));
// }

void	ft_up_or_low(int n, char x)
{
	char	low_base[17];
	char	upper_base[17];

	ft_strlcpy(low_base, "0123456789abcdef", 17);
	ft_strlcpy(upper_base, "0123456789ABCDEF", 17);
	if (x == 'x')
		ft_print_char(low_base[n]);
	else if (x == 'X')
		ft_print_char(upper_base[n]);
}
