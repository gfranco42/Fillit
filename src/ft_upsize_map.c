/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upsize_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 15:12:17 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/10 16:03:26 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char		**ft_upsize_map(int size, char **map)
{
	int		i;
//	char	**new_map;

	i = 0;
//	new_map = ft_makemap(size);
//	printf("\nnew map :\n");
//	printf("%s\n", new_map[0]);
//	printf("%s\n", new_map[1]);
//	printf("%s\n", new_map[2]);
//	while (i < size)
//	{
//		ft_strcpy(new_map[i], map[i]);
//		i++;
//	}
//	printf("\nnew map filled:\n");
//	printf("%s\n", new_map[0]);
//	printf("%s\n", new_map[1]);
//	printf("%s\n", new_map[2]);
//	i = 0;
	while (i < size - 1)
	{
		free(map[i]);
		i++;
	}
	free(map);
	map = NULL;
	map = ft_makemap(size);
	return (map);
}
