/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_counttetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 13:06:53 by gfranco           #+#    #+#             */
/*   Updated: 2018/07/04 14:14:14 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "fillit.h"

int		ft_counttetri(char *str)
{
	int		res;
	int		i;
	int		counter;

	res = 0;
	i = 0;
	counter = 0;
	while (str[i] != '\n' && str[i + 1] != '\0')
	{
		i++;
		if (str[i] == '\n' && counter == 19 && str[i + 1] == '\n')
		{
			i = i + 2;
			res++;
			counter = 0;
		}
	}
	return (0);
}


//			INCOMPLET ! ! ! !
