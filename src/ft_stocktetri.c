/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stocktetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 13:42:16 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/03 17:03:25 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"


int			***ft_stocking_array(int nbr)
{
	int		***array;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (!(array = (int***)malloc(sizeof(***array) * nbr)))
			ft_error2(-2);
	while (nbr-- > 0)
	{
		if (!(array[j] = (int**)malloc(sizeof(**array) * 2)))
			ft_error2(-2);
		if (!(array[j][0] = (int*)malloc(sizeof(*array) * 4)))
			ft_error2(-2);
		if (!(array[j][1] = (int*)malloc(sizeof(*array) * 4)))
			ft_error2(-2);
		j++;
	}
	return (array);
}

int			***ft_stocktetri(char **str, int nbr)
{
	int		i;
	int		k;
	t_pos	block;
	int		***array;

	array = ft_stocking_array(nbr);
	i = 0;
	while (i < nbr)
	{
		block = ft_stockblocks(str[i]);
		k = 0;
		while (k < 4)
		{
			array[i][0][k] = block.x[k];
			array[i][1][k] = block.y[k];
			k++;
		}
		i++;
	}
	return (array);
}
/*	A COMPLETER
 *
 *	1) secure MALLOCS
 *	2)fonction de copie
*/
