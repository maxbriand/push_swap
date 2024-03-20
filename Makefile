NAME = libpushswap.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC_DIR = src
LIBFT = libft/libft.a

FILES = parsing.c \
		push_swap.c \
		strings_to_ll.c \

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

# create 1 .o file
# src/parsing.o: src/parsing.c
# 	$(CC) $(FLAGS) -c src/parsing.c -o src/parsing.o -Iinclude -Ilibft/include

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
