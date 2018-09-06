/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   overlap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 16:16:06 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/06 19:46:10 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
/*
int ft_match(char **a, char **b) //fn confirms whether the shape of the tetris matches the positions/coordinates of the map
{   
    int i; //counter for index of each #s coordinates
    int j; //counter for the tetri's string's index
    int k; //counter for the map's string's index
    int n; //counter for the no. of coordinates, in theory, n is always 4, as index of i runs from 0 - 3
    int p; //placeholder for outcome of no. of matching coordinates
    
    i = 0;
    n = 4;
    j = 0;
    k = 0;
    p = 0;
    while (i < n)
    {   
        if (*a[j] == *b[k])
        {
//          return (1);
            p++;
//          i++;
            j++;
            k++;
        }
        i++;
    }
  while (*a[i] != '\0')
    {
        j = 0;
        while (*a[i + j] == *b[j])
        {
            if (*a[i + 1] == *b[j + 1])
                return (1);
            j++;
        }
        i++;
    }
  return (p);
}*/

int     ft_overlap(char **map, int **array) //fn confirms no. of #s present in the map's double array
{
    size_t i; //counter for each line in the map's string, split per \n
    int k; //counter for each element per line

    i = 0;
    k = 0;
	if (ft_borderline(map, array) != 0)
		return (1);
    while (i < ft_strlen(map[0])) //while ith line no < height of map
    {
        while (k < 4) //while kth element in current line < width of map 
        {
            if (map[array[0][k]][array[1][k]] == '#')
				return (1);
            k++; //go through each element of the line
        }
        k = 0; //reset k to go through each element for the next line
        i++; //repeat for the next line
    }
    return (0);
}
/*
int main()
{
    char *a[] = { "3, 0", "1, 0", "2, 0", "2, 1" };
    char *b[] = { "3, 0", "1, 0", "2, 0", "2, 1" }; //only recognises an overlap when they're both the same index.
    char *c[] = { "####\n", "..#..\n", "###.\n", "..##\n" };
    char *d[] = { "....\n", "....\n", "....\n", "....\n" };

    printf("outcome is no. of matching coordinates: %d\n", ft_match(a, b));
    printf("outcome is no. of hashes present: %d\n", ft_overlap(c));
    printf("outcome is 1 if there's a hash present: %d\n", ft_result(c));
    printf("outcome is 1 if there's a hash present: %d\n", ft_result(d));
    return (0);
}*/
