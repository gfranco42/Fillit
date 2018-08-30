/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_tetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 16:22:22 by gfranco           #+#    #+#             */
/*   Updated: 2018/08/30 18:41:28 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char			**ft_fill_tetri(char **map, t_pos block, int V, int H)
{
	int			i;

	i = 0;
	while (i < 4)
	{
		if (block.x[i] + V > 4 || block.y[i] + H > 4)
			return (map);
		i++;
	}
	i = 0;
	while (i < 4 && map[block.x[i] + V][block.y[i] + H] == '.')
	{
		map[block.x[i] + V][block.y[i] + H] = '#';
		i++;
	}
	return (map);
}
