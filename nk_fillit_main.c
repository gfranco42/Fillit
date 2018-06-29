/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakorchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 15:56:50 by nakorchi          #+#    #+#             */
/*   Updated: 2018/06/29 15:18:54 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main()
{
	char	BUFF[546];
	char	*stock;
	char	**g;
	int		x;

	stock = NULL;
	while ((x = read(0, BUFF, 546)) != 0)
		stock = ft_strjoin(stock, BUFF);
	g = ft_strsplit(stock, '\n');
	check_file(**g);

}
