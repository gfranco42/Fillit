/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 14:19:12 by gfranco           #+#    #+#             */
/*   Updated: 2018/08/08 17:14:58 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		ft_count_string(char **array)
{
	int		res;

	res = 0;
	while (array[res])
		res++;
	return (res);
}

int		ft_fivecol(char **array)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	count = 0;
	while (i < ft_count_string(array))
	{
		j = 0;
		while (array[i][j])
		{
			while (array[i][j++] != '\n')
				count++;
			if (count != 4)
				return (1);
			count = 0;
			if (array[i][j + 1] == '\0')
				j++;
		}
		i++;
	}
	return (0);
}

int		ft_is_near(char **array)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	count = 0;
	while (i < ft_count_string(array))
	{
		j = 0;
		while (array[i][j])
		{
			if (array[i][j] == '#' && array[i][j + 1] == '#')
				count++;
			if (array[i][j] == '#' && array[i][j + 5] == '#')
				count++;
			j++;
		}
		if ((count - 1) % 3 == 0)
			count--;
		i++;
	}
	if (ft_fivecol(array) != 0)
		return (1);
	return (count % 3);
}
