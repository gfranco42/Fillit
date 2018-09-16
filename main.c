/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 11:36:58 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/16 16:36:12 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

char		**ft_test_fill_tetri(char **map, int **array, int n, t_dir dir)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		map[array[0][i] + dir.x][array[1][i] + dir.y] = n + 65;
		i++;
	}
	return (map);
}

int			ft_ispossible(char **map, int **array, t_dir dir)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		if (dir.x + array[0][i] >= dir.ms || dir.y + array[1][i] >= dir.ms)
			return (3);
		if (map[dir.x + array[0][i]][dir.y + array[1][i]] != '.')
			return (2);
		i++;
	}
	return (0);
}

int			ft_remove_tet(char **map, int **array, t_dir dir)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		map[array[0][i] + dir.x][array[1][i] + dir.y] = '.';
		i++;
	}
	return (0);
}

int			ft_bt(char **map, int ***array, int nbr, t_dir dir)
{
	if (ft_final_print(map, nbr, dir) == 0)
		return (0);
	dir.x = 0;
	while (dir.x < dir.ms)
	{
		dir.y = 0;
		while (dir.y < dir.ms)
		{
			if (ft_ispossible(map, array[nbr], dir) == 0)
			{
				ft_test_fill_tetri(map, array[nbr], nbr, dir);
				if (ft_bt(map, array, nbr + 1, dir) == 0)
					return (0);
				ft_remove_tet(map, array[nbr], dir);
			}
			dir.y++;
		}
		dir.x++;
	}
	if (nbr == 0)
	{
		map = ft_upsize_map(++dir.ms, map);
		return (ft_bt(map, array, 0, dir));
	}
	return (-1);
}

int			main(int ac, char **av)
{
	int		nbr;
	char	*str;
	t_dir	dir;
	char	**tab;
	int		***array;

	nbr = 0;
	if (!(str = ft_file_cpy(ac, av)))
		return (0);
	dir.num = ft_counttetri(str);
	dir.ms = 2;
	dir.x = 0;
	dir.y = 0;
	if (!(tab = ft_file_split(str)))
	{
		write(1, "error\n", 6);
		return (0);
	}
	if (dir.num == 1 && ft_just_one(str) == 0)
		return (0);
	array = ft_stocktetri(tab, dir.num);
	ft_free_tab(tab, dir);
	tab = ft_makemap(2);
	ft_bt(tab, array, nbr, dir);
	return (0);
}
