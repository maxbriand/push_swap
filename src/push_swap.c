#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size <= 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

static int	ft_str_occurence(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] != c)
			counter++;
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
	}
	return (counter);
}

static char	*new_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i++;
	}
	return ((char *)(s + i));
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		counter;
	int		cur_array;
	char	**pt_ar;

	i = 0;
	cur_array = 0;
	counter = 0;
	pt_ar = malloc(8 * ft_str_occurence(s, c) + 8);
	if (pt_ar == NULL)
		return (NULL);
	while (cur_array < ft_str_occurence(s, c) && s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i + counter] != c && s[i + counter])
			counter++;
		pt_ar[cur_array] = malloc(counter + 1);
		ft_strlcpy(pt_ar[cur_array], &s[i], (new_strchr(&s[i], c) - &s[i]) + 1);
		i += counter;
		counter = 0;
		cur_array++;
	}
	pt_ar[cur_array] = NULL;
	return (pt_ar);
}

// exit error
void	prg_exit(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

// max and MIN in the parsing
int main(int argc, char **argv)
{
	t_list	*stack_a;
	
	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		if (*argv == NULL)
			prg_exit();
	}
	else
	{
		argv++;
	}
	parsing(argv);
	stack_a = strings_to_ll(argv);
	while (stack_a)
	{
		printf("%d", *stack_a->number);
		stack_a = stack_a->next;
	}
	return(0);
}
