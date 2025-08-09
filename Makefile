CC = cc

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_isalnum.c

OBJ = $(SRCS:.c=.o)

NAME = libft.a

all: $(NAME)
	$(CC) $(CFLAGS) $(OBJ)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
