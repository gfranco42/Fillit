# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/11 10:38:56 by jdesmare          #+#    #+#              #
#*   Updated: 2016/11/25 15:20:27 by jdesmare         ###   ########.fr       *#
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
	  ft_makemap.c       \
	  ft_prtcpy.c        \
	  ft_stockblocks.c   \
	  ft_stocktetri.c    \
	  ft_upsize_map.c    \


#	  ft_borderline.c    \
	  ft_overlap.c       \
	  ft_fill_tetri.c    \
	  ft_move_piece.c    \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@make -C ./libft/
	@$(CC) $(CFLAGS) -I$(INCLUDES) -c $(SRC)
	@$(CC) $(CFLAGS) -L./libft/ -lft $(OBJ) -o $(NAME)
	@clear
	@echo "       \033[1;34m                boing         boing"
	@echo "        \033[1;32m e-e\033[1;31m           . - .         . - .     "
	@echo "        \033[1;32m(\_/)\ \033[1;31m      '       '.   ,'       '.  "
	@echo "         \033[1;32m'-'\ '--.___,\033[1;31m         . .           . "
	@echo "          \033[1;32m'\( ,_.-'\033[1;31m             v             ."
	@echo "              \033[1;32m\ \ \033[1;31m              .             ."
	@echo "          \033[1;32m^'^'\033[1;31m"

clean:
	@make clean -C ./libft/
	@rm -f $(OBJ)

fclean: clean
	@make fclean -C ./libft/
	@rm -f $(NAME) $(LIB)

re: fclean all
