/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:00:06 by gfranco           #+#    #+#             */
/*   Updated: 2018/07/04 22:33:40 by cabdul-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft.h"

typedef struct		s_bloc //structure pour la position x et y d'un bloc
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
	t_tetri			tetri;
	struct s_stock	*next;
}					t_stock;

typedef struct		s_begin
{
    t_stock			*begin;
}					t_begin;;

int					ft_4x4(char *str);
int					ft_check(char *str);
void				ft_error(int argc);
void				*ft_memalloc(size_t size);
t_tetri				*ft_memtetri(char *file, int i);
void				*ft_memset(void *b, int c, size_t n);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlen(const char *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_strsub(char const *s, unsigned int start, size_t len);

#endif
