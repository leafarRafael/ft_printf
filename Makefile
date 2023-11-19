NAME = libftprintf.a

FILES = ft_printf.c ft_putchar.c ft_putstr.c ft_strlen.c ft_putnbr_base.c ft_putpointer.c

INCLUDES = libft.h
O_FILE = $(FILES:.c=.o)
CC = cc
CFLAGS = -Wall -Werror -Wextra
O_FLAGS = -c

all : $(NAME)

$(NAME): $(O_FILE)

%.o: %.c
	$(CC) -I$(INCLUDES) $(O_FLAGS) $(CFLAGS) $< -o $@
	ar -rc $(NAME) $@

clean:
	rm -rf $(O_FILE) $(O_BONUS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONI: all clean fclean re bonus