/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:50:03 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/13 14:43:34 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

int			ft_final_print(char **map, int nbr, t_dir dir)
{
	int		j;

	j = 0;
	if (nbr == dir.num)
	{
		while (j < dir.ms)
			ft_putendl(map[j++]);
		return (0);
	}
	return (1);
}
