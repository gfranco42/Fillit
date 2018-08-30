/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:00:06 by gfranco           #+#    #+#             */
/*   Updated: 2018/08/29 17:36:16 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft.h"
# include <stdio.h>

/*typedef struct		s_bloc //structure pour la position x et y d'un bloc
{
	int				x;
	int				y;
}					t_bloc;

typedef struct		s_tetri// structure qui regroupe les 4 bloc d'un tetriminos
{
	t_bloc			a;     //via t_tetri->a.x et a.y on peut donner les valeurs
	t_bloc			b;
	t_bloc			c;
	t_bloc			d;
}					t_tetri;

typedef struct		s_stock
{
	t_tetri			*tetri;
	struct s_stock	*next;
}					t_stock;*/

typedef struct		s_pos
{
	int		x[4];
	int		y[4];
}					t_pos;

/*typedef struct		s_piece
{
	char			tetri[23];
	struct s_piece *next;
}					t_piece;

typedef struct		s_begin
{
    t_pos			*begin;
}					t_begin;*/

//int					ft_4x4(char *str);
int					ft_check(char *str);
void				ft_error(int ac, char **av, int fd);
void				ft_error2(int fd);
int					ft_is_near(char **array);
char				**ft_file_split(char *str);
char				**ft_fill_tetri(char **map, t_pos block, int V, int H);
char				**ft_makemap(int size);
t_pos				ft_stockblocks(char *str);
char				**ft_strsplit(char const *s, char c);
//t_piece				*ft_stocktetri(char *file);
size_t				ft_counttetri(char *str);
char				*ft_file_cpy(int ac, char **av);
//void				*ft_memalloc(size_t size);
//t_tetri				*ft_memtetri(char *file, int i);
//void				*ft_memset(void *b, int c, size_t n);
//void				ft_putchar(char c);
//void				ft_putstr(char const *s);
//char				*ft_strcat(char *s1, const char *s2);
//char				*ft_strcpy(char *dst, const char *src);
//char				*ft_strjoin(char const *s1, char const *s2);
//size_t				ft_strlen(const char *s);
//char				**ft_strsplit(char const *s, char c);
//char				*ft_strsub(char const *s, unsigned int start, size_t len);
// FUNCTIONS BELOW ARE HERE ONLY FOR TEST IN MAIN.C
//int					ft_count_hash(char *str);
//int					ft_count_bn(char *str);
//int					ft_count_dot(char *str);
//int					ft_bad_char(char *str);
int					ft_count_string(char **array);
size_t				test(int ac, char **av);
//
#endif
