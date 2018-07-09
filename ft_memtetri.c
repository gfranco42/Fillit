/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memtetri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:10:05 by gfranco           #+#    #+#             */
/*   Updated: 2018/07/09 12:36:01 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*Fonction qui va memoriser la forme d'un tetriminos, on pourra
 * ensuite le stocker dans un maillon d'une liste qui regroupera
 * tous les tetriminos du fichier en parametre
 *
 * oui c'est moche mais bon, bref, passons.*/

t_tetri		*ft_memtetri(char *file, int i)
{
	t_tetri		*tetriminos;
	int			count;

	tetriminos = NULL;
	count = 0;
	while (file[i] != '#') //tu cherche le premier "bloc" d'un tetriminos
		i++;
	tetriminos->a.x = i % 5; //tu enregistre laposition du premier bloc 'a'.
	tetriminos->a.y = i / 5;
	while (file[i] != '#')//tu recommences
		i++;
	tetriminos->b.x = i % 5;//etc
	tetriminos->b.y = i / 5;//etc..
	while (file[i] != '#')
		i++;
	tetriminos->c.x = i % 5;//bref ensuite j'ai pas rajouter les conditions
	tetriminos->c.y = i / 5;// d'arret style "si ya pas 4 blocs etc etc"
	while (file[i] != '#')//mais on verra apres.
		i++;
	tetriminos->d.x = i % 5;
	tetriminos->d.y = i / 5;
	return (tetriminos);
}
