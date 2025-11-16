NAME = libftprintf.a

SRC =	ft_printf.c \
		./subfunctions/ft_intlen.c \
		./subfunctions/ft_sizetlen.c \
		./subfunctions/ft_strlen.c \
		./subfunctions/print_char.c \
		./subfunctions/print_nbr_base.c \
		./subfunctions/print_nbr.c \
		./subfunctions/print_pointer.c \
		./subfunctions/print_str.c \
		./subfunctions/print_unsigned_nbr.c

CFLAGS = -Wall -Wextra -Werror -g

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	cc $(CFLAGS) $< -c -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY = all clean fclean re
