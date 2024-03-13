#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// delete forbidden include
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct	s_list
{
	int				*number;
	int				index;
	struct	s_list	*next;
} 					t_list;

t_list	*strings_to_ll(char **strings);
void	parsing(char **argv);

#endif