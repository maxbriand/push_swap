NAME = libpushswap.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC_DIR = src
LIBFT = libft/libft.a

FILES = parsing.c \
		ft_strings_to_ll.c \
		push_swap.c \

SRC = $(addprefix $(SRC_DIR)/, $(FILES))
OBJ = $(patsubst %.c, %.o, $(SRC))

all: $(NAME)

# create pushswap.a
$(NAME): $(LIBFT) $(OBJ)
	@cp $(LIBFT) $(NAME)
	@ar rcs $(NAME) $(OBJ)

# create .o files
src/%.o: src/%.c
	@$(CC) $(FLAGS) -c $< -o $@ -Iinclude -Ilibft/include

# create libft.a
$(LIBFT): ./libft
	@make -C libft

clean:
	@rm -f $(OBJ)
	@make clean -C libft

fclean: clean
	@rm -f $(NAME)
	@make fclean -C libft

re: fclean
	@make
