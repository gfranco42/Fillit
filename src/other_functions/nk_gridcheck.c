/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gridcheck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakorchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 02:25:49 by nakorchi          #+#    #+#             */
/*   Updated: 2018/06/29 16:05:39 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fillit.h"

int		hash(char **g, int j, int i)
{
	int k;
	int tmp;

	k = 1;
	tmp = i;
	while (g[j][i] != '\0')
	{
		if (g[j][i] && g[j][i] == '.')
		{
			if (g[j][i] == '#')
				return (13);
			i++;
		}
		if (g[j][i] == '#')
			k++;
		i++;
	}
	i = tmp;
	if (check_col (g, j, i) != 0)
		return (13);
	return (k);
}

int		check_col(char **g, int j, int i)
{
	while (j <= 4)
	{
		j++;
		if (g[j][i] == '.')
		{
			if (g[j][i] == '#')
				return (1);
			j++;
		}
	}
	return (0);
}

int		check_t(char **g, int i, int j)
{
	int		signs;
	int		tmp;

	signs = 0;
	tmp = 0;
	while (g[j][i] != '\0' && (g[j][i] == '#' || g[j][i] == '.') && j <= 4)
	{
		if (ft_strlen(g[j]) != 4)
			return (1);
		if (g[j][i] == '#')
		{
			if (hash(g, i, j) == 13)
				return (1);
			else
				tmp = hash(g, i, j);
			signs = signs + tmp;
		}
		j++;
	}
	if (g[j][i] != '#' || g[j][i] != '.' || signs != 4 || j != 4)
		return (1);
	return (0);
}

int		check_file(char **g)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (g[j][i])
	{
		while (check_t(g, i, j) == 0)
			j = j + 5;
		else
		{
			ft_putstr("error");
			return (1);
		}
	}
	return (0);
}
