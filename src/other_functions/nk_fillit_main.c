/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakorchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 15:56:50 by nakorchi          #+#    #+#             */
/*   Updated: 2018/06/29 19:08:49 by nakorchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	//	char	BUFF[546];
	char	*stock;
	char	**g;
	int		x;

	stock = "";
	if (ac != 2)
		ft_putstr("usage: ./fillit target_file");
	if ((x = open (av[1], O_RDONLY)) != 0)
	{
		if ((x = read(x, av[1], 546)) != 0)
		{
			stock = ft_strjoin(stock, av[1]);
		}
	}
	g = ft_strsplit(stock, '\n');
	return(0);
}

