cLast login: Sun Sep  9 16:54:49 on ttys001
e1r5p19% cd Documents/team/testfil
e1r5p19% cd src 
e1r5p19% vim main.c 
e1r5p19% ls -la
total 328
drwxr-xr-x  35 cabdul-h  2017_paris   1190 Sep  9 16:57 .
drwxr-xr-x   9 cabdul-h  2017_paris    306 Sep  9 16:55 ..
-rw-r--r--   1 cabdul-h  2017_paris   3250 Sep  8 16:15 EXPLICATIONS.c
-rwxr-xr-x   1 cabdul-h  2017_paris   8612 Sep  8 16:15 a.out
-rw-r--r--   1 cabdul-h  2017_paris   1088 Sep  8 16:15 alpha.c
-rw-r--r--   1 cabdul-h  2017_paris   1267 Sep  8 16:15 ft_borderline.c
-rw-r--r--   1 cabdul-h  2017_paris   2766 Sep  8 16:15 ft_check.c
-rw-r--r--   1 cabdul-h  2017_paris   1092 Sep  8 16:15 ft_counttetri.c
-rw-r--r--   1 cabdul-h  2017_paris   1526 Sep  8 16:15 ft_error.c
-rw-r--r--   1 cabdul-h  2017_paris   1461 Sep  8 16:15 ft_file_cpy.c
-rw-r--r--   1 cabdul-h  2017_paris   1690 Sep  8 16:15 ft_file_split.c
-rw-r--r--   1 cabdul-h  2017_paris   1317 Sep  8 16:15 ft_fill_tetri.c
-rw-r--r--   1 cabdul-h  2017_paris   1773 Sep  8 16:15 ft_is_near.c
-rw-r--r--   1 cabdul-h  2017_paris   1239 Sep  8 16:15 ft_makemap.c
-rw-r--r--   1 cabdul-h  2017_paris   1088 Sep  8 16:15 ft_max_pos.c
-rw-r--r--   1 cabdul-h  2017_paris   1059 Sep  8 16:15 ft_memalloc.c
-rw-r--r--   1 cabdul-h  2017_paris   1128 Sep  8 16:15 ft_memset.c
-rw-r--r--   1 cabdul-h  2017_paris   1972 Sep  8 16:15 ft_move_piece.c
-rw-r--r--   1 cabdul-h  2017_paris   3198 Sep  8 16:15 ft_overlap.c
-rw-r--r--   1 cabdul-h  2017_paris   1147 Sep  8 16:15 ft_prtcpy.c
-rw-r--r--   1 cabdul-h  2017_paris    958 Sep  8 16:15 ft_putchar.c
-rw-r--r--   1 cabdul-h  2017_paris   1019 Sep  8 16:15 ft_putstr.c
-rw-r--r--   1 cabdul-h  2017_paris   1898 Sep  8 16:15 ft_stockblocks.c
-rw-r--r--   1 cabdul-h  2017_paris   1751 Sep  8 16:15 ft_stocktetri.c
-rw-r--r--   1 cabdul-h  2017_paris   1008 Sep  8 16:15 ft_strlen.c
-rw-r--r--   1 cabdul-h  2017_paris   1116 Sep  8 16:15 ft_strncpy.c
-rw-r--r--   1 cabdul-h  2017_paris   1817 Sep  8 16:15 ft_strsplit.c
-rw-r--r--   1 cabdul-h  2017_paris   1227 Sep  8 16:15 ft_strsub.c
-rw-r--r--   1 cabdul-h  2017_paris   1108 Sep  8 16:15 ft_upsize_map.c
-rw-r--r--   1 cabdul-h  2017_paris   1732 Sep  8 16:15 ft_wtf.c
-rw-r--r--   1 cabdul-h  2017_paris   3944 Sep  8 16:15 libft.h
drwxr-xr-x  70 cabdul-h  2017_paris   2380 Sep  8 16:15 libft_functions
-rw-r--r--   1 cabdul-h  2017_paris  18425 Sep  8 16:33 main.c
-rw-r--r--   1 cabdul-h  2017_paris  17977 Sep  8 16:15 main2.c
drwxr-xr-x  15 cabdul-h  2017_paris    510 Sep  8 16:15 other_functions
e1r5p19% vim ft_stocktetri.c 
e1r5p19% cd ../../sepfil/src 
e1r5p19% vim main.c 





















































/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 11:36:58 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/09 21:29:34 by cabdul-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
#include <stdio.h>
/*
 * USE THIS MAIN FOR EVERY TEST
 *
 * Put tests for every function we make
 * Put a comment after each test to indicate which function is tested 
 *
 * Thank you girls!
*/


char            **ft_test_fill_tetri(char **map, int **array, int n, int x, int y)
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


int     ft_print_map(char **map, int ms) 
{
    int j;

    j = 0;
    printf("\n\033[1;31mFilled map:\033[0m\n");
    while (j < ms) 
    {   
        printf("%s\n", map[j]);
        j++;
    }   
    //read(1,0x0,1);
    //system("clear");
    return (0);
}

int     ft_ispossible(char **map, int **array, int x, int y, int ms) 
{
    int i;

    i = 0;
    while (i < 4)
    {   
        if (x + array[0][i] >= ms || x + array[0][i] < 0 || y + array[1][i] >= ms || y + array[1][i] < 0)
            return 3;
        //printf("start index=%d x= %d , y = %d and ms = %d\n",i,array[0][i],array[1][i], ms);
        if (map[x + array[0][i]][y + array[1][i]] != '.')
        {   
        //  printf("end1\n");
            return 2;
        }   
        //  printf("end2\n");
        i++;
    }   
    return (0);
}

int print_test_tetri(int ***array)
{
    printf("test print <A>\n");
    printf(" 0 x == %d and y == %d\n", array[0][0][0], array[0][1][0]);
    printf(" 1 x == %d and y == %d\n", array[0][0][1], array[0][1][1]);
    printf(" 2 x == %d and y == %d\n", array[0][0][2], array[0][1][2]);
    printf(" 3 x == %d and y == %d\n", array[0][0][3], array[0][1][3]);

    printf("test print <B>\n");
    printf(" 0 x == %d and y == %d\n", array[1][0][0], array[1][1][0]);
    printf(" 1 x == %d and y == %d\n", array[1][0][1], array[1][1][1]);
    printf(" 2 x == %d and y == %d\n", array[1][0][2], array[1][1][2]);
    printf(" 3 x == %d and y == %d\n", array[1][0][3], array[1][1][3]);
    return (0);

}

int     ft_remove_tet(char **map, int **array, int x, int y)
{
    int i;

    i = 0;
    while (i < 4)
main.c [+]                                                                                                                                                                                
:set nonu
