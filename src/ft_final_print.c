/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:50:03 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/10 16:56:45 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int			ft_final_print(char **map, int nbr, int num, t_dir dir)
{
	if (nbr == num)
	{
		ft_print_map(map, dir);
		return (0);
	}
	return (1);
}
