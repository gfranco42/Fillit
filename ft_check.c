/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:09:01 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/13 14:42:45 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

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
	if (count % 4 != 0)
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
	if (count % 4 != 0)
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
	if (count % 12 != 0)
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

int		ft_check(char *str)
{
	if (ft_count_hash(str) == 0 && ft_count_bn(str) == 0
		&& ft_count_dot(str) == 0 && ft_bad_char(str) == 0)
		return (0);
	return (1);
}
