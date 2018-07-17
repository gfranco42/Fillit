/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4x4.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 18:50:53 by gfranco           #+#    #+#             */
/*   Updated: 2018/07/09 17:24:10 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			ft_newline(char *str) //fn shows whether there is a newline after every 5 characters
{
	int		j;

	j = 4;
	if (str[j + 1] == '\0')
		return (1);
	while (str[j + 1] != '\0')
	{
		if (str[j] == '\n')
		{
			j = j + 5;
			if (str[j + 1] == '\n')
				j++;
		}
		else
			return (1);
	}
	return (0);
}

int		ft_1t(char *str, int c)
{
	int		res;

	res = 0;
	while (str[c] != '\n')
	{
		printf("A");
		res++;
		if (str[c + 1] != '\n' && str[c + 1] != '\0')
		{
			printf("B");
			c++;
			res++;
		}
		c++;
	}
	printf("%d\n", res);
	return (res);
}

int		ft_1(char *str, int c) //created new fn to show that there is just 1 tetris
{
	if (ft_1t(str, c) == 20 && str[20] == '\0')
		return (0);
	else
		return (1);
}

int			ft_count(char *str)
{
	int		c;
	int		tnb;

	c = 0;
	tnb = 0;
	if (ft_1(str, c) == 0) //inclusion of new ft_1 to show that there is just 1 tetris
	{
		tnb = 1;
		return (tnb);
	}
	while (str[c] != '\0')
	{
		printf("I");
		if (ft_1t(str, c) == 4)
		{
			printf("J");
			c += 21;
			tnb++;
		}
		else
			return (0);
	}
	printf("\033[1;35m%d\033[0m\n", tnb);
	return (tnb);
}

/*int			ft_count2(char *str) //fn shows the no. of tetriminos present
=======
* *************** fn below not used in makefile or main..... *******************
int			ft_count2(char *str) //fn shows the no. of tetriminos present
>>>>>>> 72e3a03d2a0d75f11f1447a3b2d8e3deb34e173d
{
	int		count;
	int		add;
	int		nb;

	count = 0;
	add = 0;
	nb = 0;
	while (str[add] != '\0')
	{
			if (str[add + 1] == '\0')
		{
			nb++;
			return (nb);
		}
		else if (str[add + 1] == '\n')
		{
			if (count != 19)
				return (0);
			nb++;
			printf("%d\n", count);
			count = -1;
			add++;
		}
	}
	return (nb);
}
*/
int			ft_4x4(char *str)
{
	if (ft_newline(str) == 0 && ft_count(str) != 0)
		return (0);
	return (1);
}