/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stocktetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:10:47 by gfranco           #+#    #+#             */
/*   Updated: 2018/07/09 12:47:05 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_stock     ft_stocktetri(char *file, int i)
{

}

t_stock		*ft_init(char *file, int i)
{
    t_stock     *tetriminos;
    t_begin     *start;

	if (!(tetriminos = (t_stock*)malloc(sizeof(t_stock*))))
		exit(EXIT_FAILURE);
	if (!(start = (t_begin*)malloc(sizeof(t_begin*))))
		exit(EXIT_FAILURE);
	tetriminos->tetri = ft_memtetri(file, i);
	tetriminos->next = NULL;
	start->begin = tetriminos;

	return (start->begin);
}
