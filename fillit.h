/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:00:06 by gfranco           #+#    #+#             */
/*   Updated: 2018/06/19 15:44:01 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct	s_bloc //structure pour la position x et y d'un bloc
{
	int			x;
	int			y;
}				t_bloc;

typedef struct	s_tetri// structure qui regroupe les 4 bloc d'un tetriminos
{
	t_bloc		a;     //via t_tetri->a.x et a.y on peut donner les valeurs
	t_bloc		b;
	t_bloc		c;
	t_bloc		d;
}				t_tetri;

typedef struct	s_stock
{
	t_tetri		tetri;
	s_stock		*next;
}				t_stock;

void			ft_error(int argc);

#endif
