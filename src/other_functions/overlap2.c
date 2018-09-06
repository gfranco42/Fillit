//plan to create a function which compares the 2d coordinates of the map and the current tetri, and whether the map has a '.' for each of the tetri's coordinates

int     ft_overlap(char **map, int size, int n)
{
    int i; //counter for horizontal index
//  char    **str;
//  int n; // counter for vertical index (line no.)
    int p;
//  int size; //size of the box

    i = 0;
    n = 0;
    p = 0;
    while (n < size)
    {
//      i = 0; //makes no difference where this is
        while (i++ < size)
        {
            if (map[n][i] == '.')
            {
                p++;
                i++;
            }
            else
                p = -1;
        }
        i = 0;
        n++; //this n doesn't seem to be incrementing, so included in prototype above, but that didn't work either 
    }
    return (p);
}

#include <stdio.h>

int main()
{
    int n = 0;
    char *a[] = { "##\n", "..\n" };
    char *b[] = { "..\n", "..\n" };

    printf("A: %d\n", ft_overlap(a, 2, n));
    printf("B: %d\n", ft_overlap(b, 2, n));
    return (0);
}
