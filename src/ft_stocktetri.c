/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stocktetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 13:42:16 by gfranco           #+#    #+#             */
/*   Updated: 2018/08/28 18:05:57 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int			***ft_stocktetri(char **tab, t_pos block, char *file)
{
	int		***array;
	int		nbr;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	nbr = ft_counttetri(file);
	if (!(array = (int***)malloc(sizeof(***array) * nbr)))
			ft_error2(-2);
	while (nbr-- > 0)
	{
		if (!(array[j++] = (int**)malloc(sizeof(**array) * 2)))
			ft_error2(-2);
		while (i++ < 2)
			if (!(array[j][k] = (int*)malloc(sizeof(*array) * 4)))
				ft_error2(-2);
	}
	return (array);
}


/*	A COMPLETER
 *
 *	1) secure MALLOCS
 *	2)fonction de copie
*/
