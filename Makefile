NAME        = push_swap

CC          = cc
CFLAGS      = -Wall -Werror -Wextra -I./includes -I libft -I printf
LIBFT_DIR   = ./libft
PRINT_DIR   = ./printf
LIBS        = -L$(LIBFT_DIR) -lft -L$(PRINT_DIR) -lftprintf
SRCS        = src/main.c src/ft_stackadd_back.c src/ft_stacklast.c src/ft_stacknew.c \
              src/ft_stacksize.c src/ft_error.c src/ft_check_duplicates.c \
			  src/ft_atoi_push.c src/ft_stackdelone.c src/ft_stackclear.c


OBJS         = $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	make -s -C $(PRINT_DIR)
	make -s -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBS)

%.o: %.c includes/pushswap.h
	$(CC) $(CFLAGS) -I./includes -c $< -o $@


clean:
	rm -f $(OBJS)
	make -s -C $(LIBFT_DIR) clean
	make -s -C $(PRINT_DIR) clean


fclean: clean
	make -s -C $(LIBFT_DIR) fclean
	make -s -C $(PRINT_DIR) fclean
	rm -f $(NAME)
	rm -f $(BONUS_NAME)

re: fclean all

.PHONY: all clean fclean re bonus

