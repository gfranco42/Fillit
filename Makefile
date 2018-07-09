# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfranco <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/01 18:05:34 by gfranco           #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2018/07/09 15:44:53 by gfranco          ###   ########.fr        #
=======
#    Updated: 2018/07/04 22:32:36 by cabdul-h         ###   ########.fr        #
>>>>>>> 72e3a03d2a0d75f11f1447a3b2d8e3deb34e173d
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = fillit

CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRC = ft_4x4.c                \
	  ft_check.c              \
	  ft_error.c              \
	  ft_check.c              \
	  ft_memalloc.c           \
	  ft_memtetri.c           \
	  ft_memset.c             \
	  ft_putchar.c            \
	  ft_putstr.c             \
	  ft_strcat.c             \
	  ft_strcpy.c             \
	  ft_strjoin.c            \
	  ft_strlen.c             \
	  ft_strsplit.c           \
	  ft_strsub.c             \
	  main.c                  \
	  ft_is_near.c            \

#COMMENTS :
#	  ft_stocktetri.c         \
#

OBJ = $(SRC:.c=.o)

INC = fillit.h

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@clear
	@echo "            \033[1;34m                boing         boing         boing"
	@echo "             \033[1;32m e-e\033[1;31m           . - .         . - .         . - ."
	@echo "             \033[1;32m(\_/)\ \033[1;31m      '       '.   ,'       '.   ,'       '."
	@echo "              \033[1;32m'-'\ '--.___,\033[1;31m         . .           . .           ."
	@echo "               \033[1;32m'\( ,_.-'\033[1;31m             v             v            ."
	@echo "                   \033[1;32m\ \ \033[1;31m              .             .            . "
	@echo "                   \033[1;32m^'^'\033[1;31m"
	@./fillit

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
