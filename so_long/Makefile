NAME = mlx.a
SRC = $(wildcard *.c)
CC = gcc -Wall -Wextra -Werror
OBJ = $(SRC:.c = .o)
CFLAGS = -Lmlx -lmlx -framework OpenGL -framework AppKit

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) *.c $(CFLAGS) -o so_long

clean:
	rm -rf so_long

fclean: clean

re: clean fclean all
