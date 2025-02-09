
NAMEC = client
NAMES = server
BOUNS_NAMEC = client_bouns
BOUNS_NAMES = server_bouns
SRCC_FILES = client.c 
SRCS_FILES = server.c
BONUSC_FILES = client_bonus.c 
BONUSS_FILES = server_bonus.c
PRINTF = libftprintf.a
LIBFT = libft.a

OBJC = ${SRCC_FILES:.c=.o}
OBJS = ${SRCS_FILES:.c=.o}
OBJBC = ${BONUSC_FILES:.c=.o}
OBJBS = ${BONUSS_FILES:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror 

INCLUDE = -I include 



all : $(NAMEC) $(NAMES)

$(NAMEC) : $(OBJC)
				@make -C libft
				@make -C ft_printf 
				$(CC) $(CFLAGS) $(OBJC) $(INCLUDE) libft/$(LIBFT) ft_printf/$(PRINTF) -o $(NAMEC)

$(NAMES) : $(OBJS)
				@make -C libft
				@make -C ft_printf 
				$(CC) $(CFLAGS) $(OBJS) $(INCLUDE)  libft/$(LIBFT) ft_printf/$(PRINTF) -o $(NAMES)

bouns : $(BOUNS_NAMEC) $(BOUNS_NAMES)

$(BOUNS_NAMEC) : $(OBJBC)
						@make -C libft
						@make -C ft_printf
						$(CC) $(CFLAGS) $(OBJBC) $(INCLUDE) libft/$(LIBFT) ft_printf/$(PRINTF) -o $(BOUNS_NAMEC)

$(BOUNS_NAMES) : $(OBJBS)
						@make -C libft
						@make -C ft_printf
						$(CC) $(CFLAGS) $(OBJBS) $(INCLUDE) libft/$(LIBFT) ft_printf/$(PRINTF) -o $(BOUNS_NAMES)

clean:
	make clean -C libft 
	make clean -C ft_printf
	rm -f ${OBJC}
	rm -f $(OBJS)
	rm -f $(OBJBC)
	rm -f $(OBJBS)

fclean: clean
	make fclean -C libft 
	make fclean -C ft_printf
	rm -f $(NAMEC)
	rm -f $(NAMES)
	rm -f $(BOUNS_NAMEC)
	rm -f $(BOUNS_NAMES)
	rm -f $(libft)
	rm -f $(printf)

re: fclean all

.PHONY: all bouns clean fclean re









