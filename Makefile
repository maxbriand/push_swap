OUTPUT = push_swap
# NAME = libpush_swap.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC_DIR = src
LIBFT = libft/libft.a

FILES = main.c \
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
		ft_free_stack.c \

SRC = $(addprefix $(SRC_DIR)/, $(FILES))
OBJ = $(patsubst %.c, %.o, $(SRC))

all: $(OUTPUT)

# create pushswap.a
$(OUTPUT): $(LIBFT) $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -L./libft -lft -o $(OUTPUT)
# @cp $(LIBFT) $(NAME)
# @ar rcs $(NAME) $(OBJ)

# create .o files
src/%.o: src/%.c
	@$(CC) $(FLAGS) -g -c $< -o $@ -Iinclude -Ilibft/include

# create libft.a
$(LIBFT): ./libft
	@make -C libft

test: $(LIBFT)
	@rm -f test
	@$(CC) $(FLAGS) -g tests/test.c -Ilibft/include -L./libft -lft -o test

clean:
	@rm -f $(OBJ)
	@make clean -C libft

fclean: clean
#	@rm -f $(NAME)
	@make fclean -C libft
	@rm -f $(OUTPUT)

re: fclean
	@make
