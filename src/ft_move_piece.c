/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_piece.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 14:07:33 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/07 13:36:52 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
/*
int			ft_borderline(char **map, int **array)
{
	int		i;
	int		j;
	size_t		ms;

	ms = ft_strlen(map[0]) - 1;
	i = 0;
	j = 0;
	while (i < 4)
	{
		if (array[1][i] >= (int)ms)
			return (1);
		if (array[0][j] >= (int)ms)
			return (2);
		i++;
		j++;
	}
	return (0);
}
*/
void		ft_increase_x(int ***array)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		(*array)[0][i]++;
		i++;
	}
}

void		ft_increase_y(int ***array, int *count)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		(*array)[1][i]++;
		i++;
	}
	(*count)++;
}

void		ft_decrease_y(int ***array, int count)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		(*array)[1][i] -= count;
		i++;
	}
}

int				ft_move_piece(char **map, int **array)
{
	int			i;
	int			count;

	count = 0;
	i = 0;
	while (ft_overlap(map, array) != 0)// while there is an overlap
	{
		ft_increase_y(&array, &count);
		if (ft_overlap(map, array) == 0)
			return (0);
		if (ft_borderline(map, array) == 1)
		{
			ft_decrease_y(&array, count);
			ft_increase_x(&array);
		}
		if (ft_borderline(map, array) == 2)
			return (1);
	}
	return (0);
}
