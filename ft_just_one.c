/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_just_one.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 15:08:16 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/16 16:39:23 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void		ft_print_one(char **map)
{
	int		i;
	int		ms;

	ms = ft_strlen(map[0]);
	i = 0;
	while (i < ms)
	{
		ft_putendl(map[i]);
		i++;
	}
}

char		**ft_fill_one(char **map, t_pos block)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		map[block.x[i]][block.y[i]] = 'A';
		i++;
	}
	return (map);
}

int			ft_just_one(char *str)
{
	int		i;
	int		j;
	int		save;
	t_pos	block;
	char	**map;

	i = 0;
	j = 0;
	block = ft_stockblocks(str);
	save = 0;
	while (j < 4)
	{
		if (save < block.x[i])
			save = block.x[i];
		if (save < block.y[i])
			save = block.y[i];
		j++;
		i++;
	}
	map = ft_makemap(save + 1);
	map = ft_fill_one(map, block);
	ft_print_one(map);
	return (0);
}
