#ifndef LIST_H
# define LIST_H

typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

// Linked list manipulation
t_list	*ft_create_elem(void *data);
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
t_list	*ft_list_last(t_list *begin_list);
void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
t_list	*ft_list_push_strs(int size, char **strs);
void	ft_list_reverse(t_list **begin_list);
int     ft_list_size(t_list *begin_list);

#endif