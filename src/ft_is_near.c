/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 14:19:12 by gfranco           #+#    #+#             */
/*   Updated: 2018/08/06 18:31:43 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
i
int		ft_count_string(char **array)
{
	int		res;

	res = 0;
	while (array[res])
		res++;
	return (res);
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
			else if (array[i][j] == '#' && array[i][j + 5] == '#')
				count++;
			printf("%d\n", count);
			j++;
		}
		i++;
	}
	return (count % 3);
}
