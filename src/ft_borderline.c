/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_borderline.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabdul-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 10:08:02 by cabdul-h          #+#    #+#             */
/*   Updated: 2018/09/07 14:50:44 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int     ft_borderline(char **map, int **array)
{
    size_t  ms;
    int     i;
    int     j;

    ms = ft_strlen(map[0]) - 1;
    i = 0;
    j = 0;
    while (i < 4)
    {
        if (array[1][i] > (int)ms)
            return (1);
        if (array[0][j] > (int)ms)
            return (2);
        i++;
        j++;
    }
    return (0);
}
