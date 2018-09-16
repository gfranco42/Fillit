/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 14:19:12 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/13 14:41:22 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

int		ft_is_near(char **array, int nbr)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	while (i < nbr)
	{
		count = 0;
		j = 0;
		while (array[i][j])
		{
			if (array[i][j] == '#' && array[i][j + 1] == '#')
				count++;
			if (array[i][j] == '#' && array[i][j + 5] == '#')
				count++;
			j++;
		}
		if (count != 3 && (count - 1) != 3)
			return (1);
		if ((count - 1) % 3 == 0)
			count--;
		i++;
	}
	return (count % 3);
}
