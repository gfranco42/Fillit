/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakorchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 15:56:50 by nakorchi          #+#    #+#             */
/*   Updated: 2018/05/31 19:33:15 by nakorchi         ###   ########.fr       */
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
	while ((x = read(0, buff, 546)) != 0)
		stock = ft_strjoin(stock, buff);
	**g = ft_strsplit(stock, '\n');
	check_file(**g);

}
