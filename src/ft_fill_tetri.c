/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_tetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 16:22:22 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/07 14:50:56 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"



char			**ft_fill_tetri(char **map, int **array, int n)
{
	int			i;

	i = 0;
	if (ft_overlap(map, array) != 0)// check if it overlaps
	{
		if (ft_move_piece(map, array) == 1)// move piece
			return (map);// if it's impossible to place tetri
	}
	while (i < 4)
	{
		map[array[0][i]][array[1][i]] = n + 65;
		i++;
	}
	return (map);
}
