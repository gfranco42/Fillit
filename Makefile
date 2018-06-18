# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfranco <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/01 18:05:34 by gfranco           #+#    #+#              #
#    Updated: 2018/06/18 12:15:08 by gfranco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = fillit

CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRC = ft_check.c              \
	  ft_error.c              \
	  ft_fillmap.c            \
	  main.c                  \
	  ft_makemap.c            \
	  ft_memtetri.c           \
	  ft_solve.c              \
	  ft_stocktetri.c         \

OBJ = $(SRC:.c=.o)

INC = fillit.h

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
