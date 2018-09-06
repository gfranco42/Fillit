/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_tetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 16:22:22 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/06 19:41:27 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char			**ft_fill_tetri(char **map, int ***array)
{
	int			**save;
	int			i;

	i = 0;
	if (ft_overlap(map, array) != 0)// check if it overlaps
	{
		if (ft_move_piece(map, &array) == 1)// move piece
			return (map);// if it's impossible to place tetri
	}//                         return initial map.
	while (i < 4)// we're here if we can put the tetri on map
	{
		map[(*array)[0][i]][(*array)[1][i]] = '#';
		i++;
	}
	return (map);
}
