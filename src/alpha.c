/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:51:49 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/07 14:08:08 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char		**alpha(char **map, int ***array, int n)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		map[(*array)[0][i]][(*array)[1][i]] = n + 65;
		i++;
	}
    return (map);
}
