/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makemap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 14:02:05 by gfranco           #+#    #+#             */
/*   Updated: 2018/08/21 16:08:18 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char		*ft_makemap(int size)
{
	int		i;
	int		count;
	int		len;
	char	*str;

	i = 0;
	count = 0;
	len = size * (size + 1) + 1;
	str = (char*)ft_memalloc(len);
	while (i < len - 1)
	{
		while (count++ < size)
			str[i++] = '.';
		str[i++] = '\n';
		count = 0;
	}
	str[i] = '\0';
	return (str);
}
