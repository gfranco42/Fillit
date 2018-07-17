/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:48:25 by gfranco           #+#    #+#             */
/*   Updated: 2018/07/11 14:51:25 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	ft_error(int ac, char **av, int fd)
{
	if (av == NULL)
	{
		write(2, "error \033[0;31mNULL\033[0mtarget_file\n", 29);
		exit(EXIT_FAILURE);
	}
	if (ac != 2)
	{
		write(2, "usage: ./fillit target_file\n", 29);
		exit(EXIT_FAILURE);
	}
	if (fd == -1)
	{
		write (2, "error open()\n", 14);
		exit(EXIT_FAILURE);
	}
	if (fd == -2)
	{
		write (2, "error malloc()\n", 16);
		exit(EXIT_FAILURE);
	}
}