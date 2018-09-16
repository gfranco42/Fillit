/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 16:19:41 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/11 16:21:37 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

char		**ft_free_tab(char **tab, t_dir dir)
{
	int		i;

	i = 0;
	while (i < dir.num)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	tab = NULL;
	return (tab);
}
