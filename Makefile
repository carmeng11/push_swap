

NAME        = push_swap

CC          = cc
CFLAGS      = -g -Wall -Werror -Wextra -I./includes -I libft -I printf
LIBFT_DIR   = ./libft
PRINT_DIR   = ./printf
LIBS        = -L$(LIBFT_DIR) -lft -L$(PRINT_DIR) -lftprintf
SRCS        = src/main.c src/stacks/ft_stackadd_back.c src/stacks/ft_stacklast.c \
			src/stacks/ft_stacknew.c src/stacks/ft_stacksize.c src/ft_error.c \
			src/ft_check_duplicates.c src/ft_atoi_push.c \
			src/stacks/ft_stackclear.c src/moves/ft_utils_push.c \
			src/moves/ft_utils_rotate.c src/moves/ft_utils_swap.c \
			src/stacks/ft_stackadd_front.c src/stacks/ft_stackdelete.c \
			src/stacks/ft_stackdelone.c src/moves/ft_utils_reverse_rotate.c
# src/ft_stackdelone.c

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

