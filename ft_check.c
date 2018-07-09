/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:09:01 by gfranco           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/07/09 15:58:26 by gfranco          ###   ########.fr       */
=======
/*   Updated: 2018/07/04 22:59:17 by cabdul-h         ###   ########.fr       */
>>>>>>> 72e3a03d2a0d75f11f1447a3b2d8e3deb34e173d
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

/*
 This function checks if:
 -> there are 4 '#' per tetri
 -> there are 12 '.' per tetri
 -> there are 4 '\n' per tetri
 -> there are no other character than '.' , '#' , '\n'
 -> each '#' is next to another one

 Function "ft_check" returns (0) if the 5 others function's check is good
 * */

int		ft_count_hash(char *str)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
			count++;
		i++;
		if (str[i] == '\n' && str[i - 1] == '\n' && count == 4)
			count = 0;
		else if (str[i] == '\n' && str[i - 1] == '\n' && count != 4)
			return (1);
	}
	if (count != 4)
		return (1);
	return (0);
}

int		ft_count_bn(char *str)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			count++;
		i++;
		if (str[i] == '\n' && str[i - 1] == '\n' && count == 4)
		{
			count = 0;
			i++;
		}
		if (str[i] == '\n' && str[i - 1] == '\n' && count != 4)
			return (1);
	}
	if (count != 4)
		return (1);
	return (0);
}

int		ft_count_dot(char *str)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '.')
			count++;
		i++;
		if (str[i] == '\n' && str[i - 1] == '\n' && count == 12)
			count = 0;
		else if (str[i] == '\n' && str[i - 1] == '\n' && count != 12)
			return (1);
	}
	if (count != 12)
		return (1);
	return (0);
}

int		ft_bad_char(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '#' && str[i] != '\n' && str[i] != '.')
			return (1);
		i++;
	}
	return (0);
}

int		ft_is_near(char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#' && (str[i - 1] == '#' || str[i + 1] == '#'
			|| str[i + 5] == '#' || str[i - 5] == '#'))
			count++;
		i++;;
	}
	if (count == 0)
		return (1);
	return (count % 4);
}

int		ft_check(char *str)
{
	if (ft_count_hash(str) == 0 && ft_count_bn(str) == 0
		&& ft_count_dot(str) == 0 && ft_bad_char(str) == 0 
		&& ft_is_near(str) == 0)
		return (0);
	return (1);
}
