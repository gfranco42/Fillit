/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 11:36:58 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/10 14:36:53 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
#include <stdio.h>

char	**ft_test_fill_tetri(char **map, int **array, int n, t_dir dir) //fill tet fn with added variables of x + y
{   
    int	i;

    i = 0;
    while (i < 4)
    {
        map[array[0][i] + dir.x][array[1][i] + dir.y] = n + 65;
        i++;
    }
    return (map);
}

int     ft_print_map(char **map, t_dir dir) //fn to print map on std output.
{   
    int j;
    
    j = 0;
    printf("\n\033[1;31mFilled map:\033[0m\n");
    while (j < dir.ms)
    {   
        printf("%s\n", map[j]);
        j++;
    }
    return (0);
}

int		ft_ispossible(char **map, int **array, t_dir dir) //fn checks if current tetri can be placed in the current map
{
	int i;

    i = 0;
    while (i < 4)
    {   
        if (dir.x + array[0][i] >= dir.ms || dir.y + array[1][i] >= dir.ms) //checks if current tetris exceeds border of map
            return 3;
        //printf("start index=%d x= %d , y = %d and ms = %d\n",i,array[0][i],array[1][i], ms);
        if (map[dir.x + array[0][i]][dir.y + array[1][i]] != '.') //checks if current tetris overlaps another
        {
        //  printf("end1\n");
            return 2;
        }
        //  printf("end2\n");
        i++;
    }
    return (0);
}

int     ft_remove_tet(char **map, int **array, t_dir dir) //fn replaces tetris' output with dots to remove letter from map
{
    int i;

    i = 0;
    while (i < 4)
    {
        map[array[0][i] + dir.x][array[1][i] + dir.y] = '.';
        i++;
    }
    return (0);
}

int     ft_bt(char **map, int ***array, int nbr, int num, t_dir dir) //currently 33 lines
{
    if (nbr == num) //ends fn
        return (0);
    dir.x = 0;
    while (dir.x < dir.ms) //x is vertical
    {
        dir.y = 0;
        while (dir.y < dir.ms) //y is horizontal
        {
            if (ft_ispossible(map, array[nbr], dir) == 0) //if it's possible to place the current tetris (if no overlap and within map's border)
            {
                ft_test_fill_tetri(map, array[nbr], nbr, dir); //fills current tetris onto the map
				ft_print_map(map, dir);
                if (ft_bt(map, array, nbr + 1, num, dir) == 0) //it will repeat this recursive fn for the next tetris
                    return (0);
                else
                    ft_remove_tet(map, array[nbr], dir); //replaces current tetris' output with dots to clear the map
				ft_print_map(map, dir);
            }
            dir.y++; //after the else statement, it will try to fill the tetris by moving one place horizontally
        }
        dir.x++; //as above, but will place it one place vertically
    }
    if (nbr == 0) // if we can't place the first tetris, we upsize the map and repeat the recursive fn starting from the first tetris
    {
        map = ft_upsize_map(++dir.ms, map);
        return (ft_bt(map, array, 0, num, dir));
    }
    return (-1);
}

int             main(int ac, char **av)
{
     //   char        *str = "##..\n##..\n....\n....\n\n....\n...#\n...#\n..##\n\n#...\n#...\n##..\n....\n\n####\n....\n....\n....\n\n...#\n...#\n...#\n...#\n";
    //  char        *str = "####\n....\n....\n....\n\n##..\n##..\n....\n....\n\n..#.\n..#.\n..##\n....\n\n####\n....\n....\n....\n";
//      char        *str = "##..\n##..\n....\n....\n\n....\n...#\n...#\n..##\n\n#...\n#...\n##..\n....\n\n####\n....\n....\n....\n";
//      char        *str = "##..\n##..\n....\n....\n\n....\n...#\n...#\n..##\n\n#...\n#...\n##..\n....\n";
    //  char        *str = "##..\n##..\n....\n....\n\n....\n#...\n#...\n##..\n\n...#\n...#\n..##\n....\n";
    //  char        *str = "#...\n#...\n##..\n....\n\n....\n....\n##..\n##..\n\n...#\n...#\n..##\n....\n";
    //  char        *str = "#...\n#...\n##..\n....\n\n....\n....\n##..\n##..\n";
//  char        *str = "##..\n##..\n....\n....\n\n....\n#...\n#...\n##..\n";
   //   char        *str = "####\n....\n....\n....\n";
    //  char        *str = ft_file_cpy(ac, av);
	char		*str = ft_file_cpy(ac, av);
    char        **tab = ft_file_split(str);
    int         number = ft_counttetri(str);
    int         nbr = 0;
    int         ***array;
	t_dir		dir;
    //  t_pos       block;
    //  int         i = 0;i
    dir.ms = 2;
    int     j = 0;
	dir.x = 0;
	dir.y = 0;
    array = ft_stocktetri(tab, number);
    char        **map = ft_makemap(2);
    printf("\033[1;33mMap:\033[0m\n");
    while (j < dir.ms)
    {
        printf("%s\n", map[j]);
        j++;
    }
    ft_bt(map, array, nbr, number, dir);
    return (0);
}
