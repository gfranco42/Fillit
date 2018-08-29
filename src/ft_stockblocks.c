/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stockblocks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 14:09:13 by gfranco           #+#    #+#             */
/*   Updated: 2018/08/28 16:56:31 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int			ft_check_min_x(t_pos block)
{
	int		i;
	int		save;

	i = 0;
	save = 3;
	while (i < 4)
	{
		if (block.x[i] < save)
			save = block.x[i];
		i++;
	}
	return (save);
}

int			ft_check_min_y(t_pos block)
{
	int		i;
	int		save;

	i = 0;
	save = 3;
	while (i < 4)
	{
		if (block.y[i] < save)
			save = block.y[i];
		i++;
	}
	return (save);
}

void		ft_replace_x(int save, t_pos *block)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		block->x[i] = block->x[i] - save;
		i++;
	}
}

void		ft_replace_y(int save, t_pos *block)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		block->y[i] -= save;
		i++;
	}
}

t_pos		ft_stockblocks(char *str)
{
	t_pos		block;
	int			i;
	int			j;
	int			save;

	i = 0;
	j = 0;
	while (j < 4)
	{
		while (str[i] != '#')
			i++;
		block.x[j] = i / 5;
		block.y[j++] = i++ % 5;
	}
	save = ft_check_min_x(block);
	if (save != 0)
		ft_replace_x(save, &block);
	save = ft_check_min_y(block);
	if (save != 0)
		ft_replace_y(save, &block);
	return (block);
}
