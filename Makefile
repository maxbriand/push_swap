NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC_DIR = src
LIBFT = libft/libft.a

FILES = main.c \
		ft_exit.c \
		ft_parsing.c \
		ft_strings_to_ll.c \
		ft_swap.c \
		ft_push.c \
		ft_rotate.c \
		ft_reverse_rotate.c \
		ft_sort_small_list.c \
		ft_indexation.c \
		ft_is_sorted.c \
		ft_sort_list.c \
		ft_utils.c \
		ft_multiple_strings.c \

SRC = $(addprefix $(SRC_DIR)/, $(FILES))
OBJ = $(patsubst %.c, %.o, $(SRC))

all: $(NAME)

# create pushswap.a
$(NAME): $(LIBFT) $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -L./libft -lft -o $(NAME)

# create .o files
src/%.o: src/%.c
	@$(CC) $(FLAGS) -g -c $< -o $@ -Iinclude -Ilibft/include

# create libft.a
$(LIBFT): ./libft
	@make -C libft

clean:
	@rm -f $(OBJ)
	@make clean -C libft

fclean: clean
	@make fclean -C libft
	@rm -f $(NAME)

re: fclean
	@make
