#include "../includes/fillit.h"

int     ft_overlap(char **str, int nbr)
{
    int i; //placeholder for outcome
    int n; //tetris index no.
    int j; //index for #s
//    char    **str;
    int     ***array;
    
    i = 0;
//  j = 0;
    n = 0;
    array = ft_stocktetri(str, nbr);
//  block = ft_stocktetri(*str[n], nbr);
    while (n < nbr - 1)
    {
        j = 0;
        while (j < 4)
        {
            if ((array[n][0][j] == array[n + 1][0][j]) && (array[n][1][j] == array[n + 1][1][j]))
                i = 1;
            j++;
        }
        n++;
    }
//  printf("overlap exists if this is 1: %d\n", ft_overlap(block, nbr));
//    printf("overlap exists if this is 1: %d\n", ft_overlap(str, nbr));
    return (i);
}
