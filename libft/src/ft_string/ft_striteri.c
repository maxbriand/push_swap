/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 23:47:29 by mbriand           #+#    #+#             */
/*   Updated: 2023/11/27 19:19:51 by mbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*void    f(unsigned int i, char* s)
{
	printf("%s\n", s);
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, (s + i));
		i++;
	}
}
