/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 12:35:01 by gfranco           #+#    #+#             */
/*   Updated: 2018/08/23 15:26:10 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char			**ft_array_making(int nbr)
{
	char		**array;
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (!(array = (char**)malloc(sizeof(*array) * nbr + 1)))
		ft_error2(-2);
	while (i++ < nbr + 1)
	{
		if (i < nbr)
			array[j++] = (char*)ft_memalloc(22);
		else
			array[j] = (char*)ft_memalloc(1);
	}
	return (array);
}

char			**ft_file_split(char *str)
{
	size_t			i_arr;
	size_t		i;
	size_t		nbr;
	char		**array;

	i_arr = 0;
	i = 0;
	nbr = ft_counttetri(str);
	if (ft_strlen(str) % 21 != 0 || ft_check(str) != 0 || nbr > 26)
		ft_error2(-3);
	array = ft_array_making(nbr);
	while (i_arr < nbr)
	{
		ft_prtcpy(array[i_arr], str, 21, i);
		i = i + 21;
		i_arr++;
	}
	array[i_arr] = NULL;
	return (array);
}
