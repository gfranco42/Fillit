/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:48:25 by gfranco           #+#    #+#             */
/*   Updated: 2018/08/07 16:25:40 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
void	ft_error2(int fd)
{
	if (fd == -3)
	{
		write(2, "error \033[1;41minvalid file\033[0m\n", 30);
		exit(EXIT_FAILURE);
	}
}

void	ft_error(int ac, char **av, int fd)
{
	if (av == NULL)
	{
		write(2, "error \033[1;41mNULL\033[0mtarget_file\n", 33);
		exit(EXIT_FAILURE);
	}
	if (ac != 2)
	{
		write(2, "usage: ./fillit \033[1;41mtarget_file\033[0m\n", 39);
		exit(EXIT_FAILURE);
	}
	if (fd == -1)
	{
		write (2, "error \033[1;41mopen()\033[0m\n", 24);
		exit(EXIT_FAILURE);
	}
	if (fd == -2)
	{
		write (2, "error \033[1;41mmalloc()\033[0m\n", 26);
		exit(EXIT_FAILURE);
	}
	else
		ft_error2(fd);
}
