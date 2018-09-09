/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 11:36:58 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/09 22:27:54 by cabdul-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
#include <stdio.h>

char            **ft_test_fill_tetri(char **map, int **array, int n, int x, int y) //fill tet fn with added variables of x + y
{   
    int         i;
    
    i = 0;
    while (i < 4)
    {   
        map[array[0][i] + x][array[1][i] + y] = n + 65;
        i++;
    }
    return (map);
}

#define NOT_IN_MAP 3 
#define OVERLAP 2 

int     ft_print_map(char **map, int ms) //fn to print map on std output.
{   
    int j;
    
    j = 0;
    printf("\n\033[1;31mFilled map:\033[0m\n");
    while (j < ms)
    {   
        printf("%s\n", map[j]);
        j++;
    }
    //read(1,0x0,1); //read fn to read output of each loop just one at a time
    //system("clear");
    return (0);
}

int     ft_ispossible(char **map, int **array, int x, int y, int ms) //fn checks if current tetri can be placed in the current map
{   
    int i;
    
    i = 0;
    while (i < 4)
    {   
        if (x + array[0][i] >= ms || x + array[0][i] < 0 || y + array[1][i] >= ms || y + array[1][i] < 0) //checks if current tetris exceeds border of map
            return 3;
        //printf("start index=%d x= %d , y = %d and ms = %d\n",i,array[0][i],array[1][i], ms);
        if (map[x + array[0][i]][y + array[1][i]] != '.') //checks if current tetris overlaps another
        {
        //  printf("end1\n");
            return 2;
        }
        //  printf("end2\n");
        i++;
    }
    return (0);
}

int     ft_remove_tet(char **map, int **array, int x, int y) //fn replaces tetris' output with dots to remove letter from map
{
    int i;

    i = 0;
    while (i < 4)
    {
        map[array[0][i] + x][array[1][i] + y] = '.';
        i++;
    }
    return (0);
}

int     ft_good_backtracking(char **map, int ***array, int nbr, int ms, int number, int x, int y) //currently 33 lines
{
//  int x = 0;
//  int y = 0;

    if (nbr == number) //ends fn
        return (0);
//  print_test_tetri(array);
    x = 0;
    while (x < ms) //x is vertical
    {
        y = 0;
        while (y < ms) //y is horizontal
        {
            if (ft_ispossible(map, array[nbr], x, y, ms) == 0) //if it's possible to place the current tetris (if no overlap and within map's border)
            {
                printf("===================== try to place in ord = %d abs %d\n", x, y);
                ft_test_fill_tetri(map, array[nbr], nbr, x, y); //fills current tetris onto the map
                ft_print_map(map, ms);
                if (ft_good_backtracking(map, array, nbr + 1, ms, number, x, y) == 0) //it will repeat this recursive fn for the next tetris
                    return (0);
                else
                    ft_remove_tet(map, array[nbr], x, y); //replaces current tetris' output with dots to clear the map
                ft_print_map(map, ms);
            }
            y++; //after the else statement, it will try to fill the tetris by moving one place horizontally
        }
        x++; //as above, but will place it one place vertically
    }
    printf("we can't place tet = <%c>\n", nbr + 65);
    if (nbr == 0) // if we can't place the first tetris, we upsize the map and repeat the recursive fn starting from the first tetris
    {
        printf("we need to increase the map size\n");
        map = ft_upsize_map(++ms, map);
        return (ft_good_backtracking(map, array, 0, ms, number, x, y));
    }
    else
        return (-1);
}

int             main(/*int ac, char **av*/)
{
        char        *str = "##..\n##..\n....\n....\n\n....\n...#\n...#\n..##\n\n#...\n#...\n##..\n....\n\n####\n....\n....\n....\n\n...#\n...#\n...#\n...#\n";
    //  char        *str = "####\n....\n....\n....\n\n##..\n##..\n....\n....\n\n..#.\n..#.\n..##\n....\n\n####\n....\n....\n....\n";
//      char        *str = "##..\n##..\n....\n....\n\n....\n...#\n...#\n..##\n\n#...\n#...\n##..\n....\n\n####\n....\n....\n....\n";
//      char        *str = "##..\n##..\n....\n....\n\n....\n...#\n...#\n..##\n\n#...\n#...\n##..\n....\n";
    //  char        *str = "##..\n##..\n....\n....\n\n....\n#...\n#...\n##..\n\n...#\n...#\n..##\n....\n";
    //  char        *str = "#...\n#...\n##..\n....\n\n....\n....\n##..\n##..\n\n...#\n...#\n..##\n....\n";
    //  char        *str = "#...\n#...\n##..\n....\n\n....\n....\n##..\n##..\n";
//  char        *str = "##..\n##..\n....\n....\n\n....\n#...\n#...\n##..\n";
    //  char        *str = "##..\n##..\n....\n....\n";
    //  char        *str = ft_file_cpy(ac, av);
    char        **tab = ft_file_split(str);
    int         number = ft_counttetri(str);
    int         nbr = 0;
    int         ***array;
    //  t_pos       block;
    //  int         i = 0;
    int     ms = 2;
    int     j = 0;
    int     x = 0;
    int     y = 0;
    array = ft_stocktetri(tab, number);
    char        **map = ft_makemap(ms);
    printf("\033[1;33mMap:\033[0m\n");
    while (j < ms)
    {
        printf("%s\n", map[j]);
        j++;
    }
    ft_good_backtracking(map, array, nbr, ms, number, x, y);
    return (0);
}
