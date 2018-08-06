/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_cpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 14:28:12 by gfranco           #+#    #+#             */
/*   Updated: 2018/07/24 13:50:58 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
#include "../includes/libft.h"
#define B_SIZE 4096

/*
 *This function open and read inside the file and copy it to a better sized
 string and return it. From this point, we can check the string with ft_check.
 * */
char	*ft_file_cpy(int ac, char **av)
{
	char	buf[B_SIZE + 1];
	char	*str;
	int		res;
	int		fd;

	fd = open(av[1], O_RDONLY);
	ft_error(ac, av, fd);
	res = read(fd, buf, B_SIZE);
	if (!(str = (char *)ft_memalloc(sizeof(char *) * res + 1)))
		ft_error(ac, av, -2);
	ft_strncpy(str, (const char*)buf, res);
	close(fd);
	return (str);
}
