CC = cc
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c\
      ft_print_hex.c\
      ft_print_ptr.c\
      ft_strchr.c\
      func.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar csr $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
