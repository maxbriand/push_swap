#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// delete forbidden include
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct	s_pslist
{
	int					number;
	int					index;
	struct	s_pslist	*next;
} 						t_pslist;

t_pslist	*ft_strings_to_ll(char **strings);
void		parsing(char **argv);
void		prg_exit(void);

#endif