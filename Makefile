NAME = pushswap.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC_DIR = ./src
LIBFT = ./libft/libft.a

FILES = parsing.c \
		push_swap.c \
		strings_to_ll.c \

SRC = $(addprefix $(SRC_DIR)/, $(FILES))
OBJ = $(patsubst $(SRC_DIR)%.c, %.o, $(SRC))


all: $(NAME)

# create pushswap.a
$(NAME): $(LIBFT) $(OBJ)

# create .o files
$(OBJ):
	$(CC) $(CFLAGS) $(SRC)

# create libft.a
libft.a:
	make -C libft
