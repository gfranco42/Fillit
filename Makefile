# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfranco <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/16 15:43:47 by gfranco           #+#    #+#              #
#    Updated: 2018/09/16 17:53:54 by gfranco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CC = gcc $(FLAGS)

FLAGS = -Wall -Werror -Wextra -g

INCLUDES = ./includes/

SRC = main.c             \
	  ft_check.c         \
	  ft_counttetri.c    \
	  ft_file_cpy.c      \
	  ft_file_split.c    \
	  ft_final_print.c   \
	  ft_free_tab.c      \
	  ft_is_near.c       \
	  ft_just_one.c      \
	  ft_makemap.c       \
	  ft_prtcpy.c        \
	  ft_stockblocks.c   \
	  ft_stocktetri.c    \
	  ft_upsize_map.c    \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	make -C ./libft/
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $(SRC)
	$(CC) $(CFLAGS) -L./libft/ -lft $(OBJ) -o $(NAME)

%.o : %.c
	gcc -c $< -o $@

clean:
	@make clean -C ./libft/
	@rm -f $(OBJ)

fclean: clean
	@make fclean -C ./libft/
	@rm -f $(NAME) $(LIB)

re: fclean all
