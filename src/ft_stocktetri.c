/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stocktetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:10:47 by gfranco           #+#    #+#             */
/*   Updated: 2018/07/18 15:53:54 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

t_piece		*ft_init(char *file)
{
    t_piece     *tetriminos;
    t_begin     *start;

	if (!(tetriminos = (t_piece*)malloc(sizeof(t_piece*))))
		exit(EXIT_FAILURE);
	if (!(start = (t_begin*)malloc(sizeof(t_begin*))))
		exit(EXIT_FAILURE);
	tetriminos->next = NULL;
	start->begin = tetriminos;

	return (start->begin);
}

t_piece		*ft_addelem(char *str)
{
	t_piece	*new;

	if (!(new = (t_piece*)malloc(sizeof(t_piece*))))
		exit(EXIT_FAILURE);
	new
	return (new);
}

t_piece     *ft_stocktetri(char *file)
{
	t_piece		*piece;
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
