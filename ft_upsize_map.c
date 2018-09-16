/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upsize_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 15:12:17 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/13 14:45:14 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

char	**ft_upsize_map(int size, char **map)
{
	int	i;

	i = 0;
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
