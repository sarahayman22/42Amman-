
NAME = fractol
CC = cc
CFLAGS = -Wall -Wextra -Werror 
SRC =   events.c\
	init.c\
	main.c\
	math_utils.c\
	render.c\
	string_utils.c
	
LIBFT = libft/libft.a
LDFLAGS = -lmlx -lXext -lX11 -L$(LIBFT_DIR) -lft


OBJS = $(SRC:.c=.o)
INCLUDE = -I include 

%.o: %.c
	$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@

all : $(NAME) 

$(NAME) : $(OBJS)
		@$(MAKE) -C libft
		$(CC) $(CFLAGS) $(OBJS) $(INCLUDE) $(LIBFT) $(LDFLAGS) -o $(NAME)

clean:
	@$(MAKE) clean -C libft
	rm -f $(OBJS) 
	
fclean : clean
	@$(MAKE) fclean -C libft 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 
