/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stocktetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:10:47 by gfranco           #+#    #+#             */
/*   Updated: 2018/06/19 15:44:12 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_stock     ft_stocktetri(char *file, int i)
{
    t_stock     *tetriminos;
    t_stock     *start;
    int         a;

    while (a < 3)
    {
        tetriminos = (t_stock)malloc(sizeof(t_stock));
        tetriminos.tetri = ft_memtetri(file, i);
        tetriminos = tetriminos->next;
        a++;
    }
    return (start->begin);
}
