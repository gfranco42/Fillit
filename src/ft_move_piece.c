/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_piece.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 14:07:33 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/06 16:18:33 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int			ft_borderline(int ***array)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		
	}
	return (0);
}

void		ft_increase_x(int ***array)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		(*array)[0][i]++;
		i++;
	}
}

void		ft_increase_y(int ***array)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		(*array)[1][i]++;
		i++;
	}
}

int			ft_move_piece(char **map, int **array)
{
	int		check;
	int		sm;
	int		i;

	check = 0;
	sm = ft_strlen(map[0]);//   size of the map
	i = 0;
	while (check != 0)// while there is an overlap
	{
		ft_increase_y(&array);
		check = ft_overlap(...);
		if ()
	}
}
/*
Cleared Map
....
....
....
....

1st fill:   ##
            ##

AA.
AA.
...

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

*/
// a completer et a verifier !!!
