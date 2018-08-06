/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 12:35:01 by gfranco           #+#    #+#             */
/*   Updated: 2018/08/06 16:03:32 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char			**ft_array_making(char *str)
{
	char		**array;
	size_t		i;
	int			j;

	i = 0;
	j = 0;
	if (!(array = (char**)ft_memalloc(sizeof(array) * ft_counttetri(str) + 1)))
		return (NULL);
	while (i++ < ft_counttetri(str) + 1)
	{
		if (i < ft_counttetri(str))
		{
			if (!(array[j++] = (char*)ft_memalloc(sizeof(*array) * 22)))
				return (NULL);
		}
		else
		{
			if (!(array[j] = (char*)ft_memalloc(sizeof(*array) * 21)))
				return (NULL);
		}
	}
	return (array);
}

char			**ft_file_split(char *str)
{
	int			i_arr;
	size_t		i;
//	size_t		count;
	char		**array;

	i_arr = 0;
	i = 0;
//	count = 0;
	array = ft_array_making(str);
	while (i_arr < 5)
	{
		ft_prtcpy(array[i_arr], str, 21, i);
		i = i + 21;
		i_arr++;
//		count++;
	}
	return (array);
}
