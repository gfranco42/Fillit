/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 14:19:12 by gfranco           #+#    #+#             */
/*   Updated: 2018/07/17 16:15:48 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
#include <stdio.h>

//int		ft_is_near1(char)
int		ft_pass(char *str, int i)
{
	if (str[i + 5] == '\n')
		return (1);
	return (0);
}

int		ft_is_near(char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '#' && str[i + 1] == '#')
			count++;
		if (ft_pass(str, i) == 0 &&str[i] == '#' && str[i + 5] == '#')
			count++;
		if (str[i] == '\n' && (str[i + 1] == '\n' || str[i + 1]) && count == 4)
			count = 3;
		i++;
	}
	printf("count : %d", count);
	if (count == 0)
		return (1);
	return (count % 3);
}



int		ft_check(char *str)
{
	if (ft_check2(str) == 0 && ft_is_near(str) == 0)
		return (0);
	return (1);
}
