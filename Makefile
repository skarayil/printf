CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC = 	ft_printf.c \
	ft_printf_utils.c \
	ft_printf_base.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re