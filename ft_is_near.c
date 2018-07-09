/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 11:07:53 by gfranco           #+#    #+#             */
/*   Updated: 2018/07/09 15:53:30 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int		ft_test(char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#' && (str[i - 1] == '#' || str[i + 1] == '#'
			|| str[i - 5] == '#' || str[i + 5] == '#'))
			count++;
		i++;
	}
	if (count == 0)
		return (1);
	return (count % 4);
}