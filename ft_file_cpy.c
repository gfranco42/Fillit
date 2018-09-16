/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_cpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 14:28:12 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/13 14:58:23 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"
#define B_SIZE 4096

char	*ft_file_cpy(int ac, char **av)
{
	char	buf[B_SIZE + 1];
	char	*str;
	int		res;
	int		fd;

	fd = open(av[1], O_RDONLY);
	if (ac != 2)
	{
		write(2, "usage: ./fillit target_file\n", 28);
		return (0);
	}
	res = read(fd, buf, B_SIZE);
	if (!(str = (char *)malloc(sizeof(char *) * res + 1)))
		return (NULL);
	ft_strcpy(str, (const char*)buf);
	close(fd);
	return (str);
}
