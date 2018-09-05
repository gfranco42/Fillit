/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_tetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 16:22:22 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/05 13:43:03 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char			**ft_fill_tetri(char **map, int ***array, int V, int H)
{
	int			i;
	size_t		map_s;

	i = 0;
	map_s = ft_strlen(map[0] - 1);
	printf("map_s == %zu\n", map_s);
	i = 0;
	while (i < map_s && (map[array[i] + V][block.y[i] + H] == '.'))
	{
		map[block.x[i] + V][block.y[i] + H] = '#';
		i++;
	}
	return (map);
}
