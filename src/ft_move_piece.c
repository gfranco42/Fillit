/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_piece.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 14:07:33 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/04 15:26:25 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void			ft_move_piece(char ***map, t_pos block, int H, int V)
{
	int		check;
	int		map_s;
	int		i;

	map_s = ft_map_size(&map);
	i = 0;
	check = ft_overlap(&map, block, H, V); // creer function overlap pour check
	while (check != 0)//						return (0) si aucun overlap
	{//											return (1) si overlap
		H++;//										move tetri horizontalement
		check = ft_overlap(&map, block, H, &V);//	re-check si overlap
		while (i < map_s && block.x[i++] != ft_map_size(&map))// check si hors map
		{
			if (block.x[i] == ft_map_size(&map))// si hors map, reviens au debut et decale 1 verticale
			{
				V++;
				H = 0;
			}
		}
		i = 0;
	}
	return (*map);
}

Cleared Map
....
....
....
....

1st fill:   ##
            ##

AA..
AA..
....
....

2nd fill:  #
           #
           ##

AA..     move by 1 horizontaly...doesn't fill
AA..     move by 1 more...it fills !
....
....         AAB.
       ==>   AAB.
             ..BB
             ....

3rd fill:  #
           ###

AAB.    move by 1 H...doesn't fill
AAB.    tetri is at the limit of the square...
..BB    begin from H = 0 and V + 1 and try again...
....

		finally must display: AAB.
                              AAB.
                              C.BB
                              CCC.


// a completer et a verifier !!!
