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

int	*ft_array_atoi(char **argv, int argc)
{
	int	*argv_int;
	int	i;

	argv_int = malloc(sizeof(int *) * argc);
	if (argv_int == NULL)
		prg_exit();
	i = 0;
	while(argv[i])
	{
		argv_int[i] = ft_atoi(argv[i]); 
		i++;
	}
	return (argv_int);
}

// Do all inputs are differents? 
void	is_unique(int *argv_int, int argc)
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
				prg_exit();
			}
			j++;
		}
		i++;
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
void	ft_parsing(char **argv, int argc)
{
	int	*argv_int;
	
	if (*argv == NULL)
		exit(EXIT_SUCCESS);
	is_number(argv);
	// ft_printf("All args are numbers\n");
	is_integer(argv);
	// ft_printf("All args are integer\n");
	argv_int = ft_array_atoi(argv, argc);
	is_unique(argv_int, argc);
	// ft_printf("All args are different\n");
	free(argv_int);
}
