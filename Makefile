# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfranco <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/01 18:05:34 by gfranco           #+#    #+#              #
#    Updated: 2018/08/29 16:56:36 by gfranco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = fillit

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I$(INC_PATH)

SRC_PATH = ./src/
SRCS = $(addprefix $(SRC_PATH), $(SRC))
SRC = ft_check.c              \
	  ft_counttetri.c         \
	  ft_error.c              \
	  ft_is_near.c            \
	  ft_file_cpy.c           \
	  ft_file_split.c         \
	  ft_fill_tetri.c         \
	  ft_makemap.c            \
	  ft_memalloc.c           \
	  ft_memset.c             \
	  ft_prtcpy.c             \
	  ft_stockblocks.c        \
	  ft_strlen.c             \
	  ft_strncpy.c            \
	  ft_strsplit.c           \
	  ft_strsub.c             \
	  main.c                  \

#COMMENTS :
#	  ft_open_file.c          \
#	  ft_strcpy.c             \
#	  ft_strjoin.c            \
#	  ft_putstr.c             \
#	  ft_strcat.c             \
#	  ft_memset.c             \
#	  ft_putchar.c            \
#	  ft_stocktetri.c         \
#	  ft_4x4.c                \

OBJ_PATH = ./obj/
OBJS = $(addprefix $(OBJ_PATH), $(OBJ))
OBJ = $(SRC:.c=.o)

INC_PATH = ./includes/
INCS = $(addprefix $(INC_PATH), $(INC))
INC = fillit.h

all: $(NAME)

$(NAME): $(OBJ_PATH) $(OBJS)
	@ar -rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@clear
	@echo "            \033[1;34m                boing         boing         boing"
	@echo "             \033[1;32m e-e\033[1;31m           . - .         . - .         . - ."
	@echo "             \033[1;32m(\_/)\ \033[1;31m      '       '.   ,'       '.   ,'       '."
	@echo "              \033[1;32m'-'\ '--.___,\033[1;31m         . .           . .           ."
	@echo "               \033[1;32m'\( ,_.-'\033[1;31m             v             v            ."
	@echo "                   \033[1;32m\ \ \033[1;31m              .             .            . "
	@echo "                   \033[1;32m^'^'\033[1;31m"
#	@./fillit text

$(OBJ_PATH)%.o: $(SRC_PATH)%.c $(INCS)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)

clean:
	@rm -f $(OBJS)
	@rm -rf $(OBJ_PATH)

fclean: clean
	@rm -f $(NAME)

re: fclean all
