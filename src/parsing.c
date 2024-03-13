#include "push_swap.h"

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
// is digit
int	ft_isdigit(int c)
{
	if ((c >= 48 && c <= 57))
		return (1);
	return (0);
}
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
long	ft_atol(const char *s)
{
	long		nbr;
	const char	*sign;
	int			digit;	

	nbr = 0;
	sign = s;
	if (*s == '-' || *s == '+')
		s++;
	while (*s)
	{
		digit = *s - '0';
		if ((((LONG_MAX / 10 == nbr) && digit > LONG_MAX % 10)
				|| (LONG_MAX / 10 < nbr)) && *sign != '-')
			return (LONG_MAX);
		if ((((LONG_MIN / 10 == -nbr) && - digit < LONG_MIN % 10)
				|| (LONG_MIN / 10 > -nbr)) && *sign == '-')
			return (LONG_MIN);
		nbr *= 10;
		nbr += (*s) - 48;
		s++;
	}
	if (*sign == '-')
		nbr *= -1;
	return (nbr);
}
// Do all inputs are differents? 
void	is_unique(char **argv)
{
	char	**comparator;

	while (*argv)
	{
		comparator = argv + 1;
		while (*comparator)
		{
			if (my_strcmp(*argv, *comparator) == 0)
				prg_exit();
			comparator++;
		}
		argv++;
	}
}
// Do all inputs are integers?
void is_integer(char **argv)
{
	long number;

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
void	parsing(char **argv)
{
	if (*argv == NULL)
		exit(EXIT_SUCCESS);
	is_number(argv);
	printf("All args are numbers\n");
	is_integer(argv);
	printf("All args are integer\n");
	is_unique(argv);
	printf("All args are different\n");
}
// max and MIN in the parsing
int main(int argc, char **argv)
{
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
	return(0);
}
