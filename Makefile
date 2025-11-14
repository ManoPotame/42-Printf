NAME = ft_printf.a

SRC =

CFLAGS = -Wall -Wextra -Werror -g

OBJ = $(SRC:.c=.o)

all: $(NAME)

.PHONY = all clean fclean re
