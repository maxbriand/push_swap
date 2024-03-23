#include "push_swap.h"
#include "libft.h"

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

// Do all inputs are differents? 
void	is_unique(char **argv)
{
	char	**comparator;

	int i = 1;
	while (*(argv+1))
	{
		if (my_strcmp(*argv, "-0") == 0 && *argv)
			*argv = ft_strdup("0");
		comparator = argv + 1;
		if (my_strcmp(*comparator, "-0") == 0 && *comparator)
			*comparator = ft_strdup("0");
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
	ft_printf("All args are numbers\n");
	is_integer(argv);
	ft_printf("All args are integer\n");
	is_unique(argv);
	ft_printf("All args are different\n");
}
