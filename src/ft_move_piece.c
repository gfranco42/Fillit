/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_piece.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 14:07:33 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/05 17:13:01 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int			ft_voidmap(char **map)
{
	int		i;
	int		j;

	i = 0;//                                   Don't pay attention, it's just
	j = 0;//                                to check if the map is empty of '#'
	while (i < ft_strlen(map[0] - 1))//    It could be usefull....maybe.
	{
		while (map[i][j] != '#' && map[i][j])
			j++;
		if (map[i][j] == '#')
			return (1);
	}
	return (0);
}

void			ft_move_piece(char **map, int **array, int *H, int *V)
{
	int		check;
	int		bl;
	int		i;

	check = ft_overlap(map, array, &H, &V);
	bl = ft_strlen(map[0] - 2);// bl = the borderline value :
	i = 0;//				if map 2x2 bl = 1 
	while (check != 0)// while there is an overlap
	{
		(*H)++;//  Try to move 1 on the right
		check = ft_overlap(map, array, &H, &V);
		while (i < 4 && check != 0) // if still overlap
		{//                             check if the tetri is on the borderline
			if ((array[1][i] + *H) == bl && (array[0][i] + (*V)++) != bl)
				*H = 0;// if bl horizontally BUT NOT vertically
			else if ((array[1][i] + *H) == bl && (array[0][i] + *V) == bl)
			{//         if it is on the bl both vert. and hori.
				*V = 0;//  I put value of 0 to give an information:
				*H = 0;//  "If i use this function and V and H  =  0,"
			}//            "It means that we can't put this tetri... "
			i++;// do it 4 time to check both value of x and y.
		}
		check = 0;
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


// a completer et a verifier !!!
