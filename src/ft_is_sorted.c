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