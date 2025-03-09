# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/24 19:50:15 by cagomez-          #+#    #+#              #
#    Updated: 2024/11/11 19:35:33 by cagomez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
RM = rm -rf
CC = cc
CFLAGS = -Werror -Wall -Wextra
LIB = ar -rcs
SRC = ft_printf.c ft_aux.c ft_controls.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
