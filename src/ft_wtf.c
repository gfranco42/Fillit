/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stocktetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:10:47 by gfranco           #+#    #+#             */
/*   Updated: 2018/08/23 14:59:11 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void			*ft_init()
{
    t_pos		*piece;
    t_begin		*start;

	if (!(piece = (t_pos*)malloc(sizeof(*piece))))
		exit(EXIT_FAILURE);
	if (!(start = (t_begin*)malloc(sizeof(*start))))
		exit(EXIT_FAILURE);
	piece.Ax = 0;
	piece.Ay = 0;
	piece.Bx = 0;
	piece.By = 0;
	piece.Cx = 0;
	piece.Cy = 0;
	piece.Dx = 0;
	piece.Dy = 0;
	piece->next = NULL;
	start->begin = piece;
	return (start->begin);
}

void		*ft_addelem(t_pos *piece)
{
	t_pos	*new;
:wq

	if (!(new = (t_pos*)malloc(sizeof(t_pos*))))
		exit(EXIT_FAILURE);
	new = 
	return (new);
}

t_pos			*ft_stocktetri(char *file)
{
	t_pos		*piece;
	t_begin		*start;
	int			i;

	i = 0;
	piece = ft_init(file);
	while (i < ft_counttetri(file))
	{
		ft_strncpy(piece->tetri, file, 21);
		piece->tetri[22] = '\0';
		piece = piece->next;
	}
	return (start->begin);
}
