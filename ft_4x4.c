/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4x4.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 18:50:53 by gfranco           #+#    #+#             */
/*   Updated: 2018/06/30 11:35:05 by gfranco          ###   ########.fr       */
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

/*Create function to return false if a tetriminos is flase even if the others
 * are correct.*/
//create fn to verify that each tetriminos is of a correct form - perhaps look into the quantities file and integrate with the fn below.
int		ft_1t(char *str, int c)
{
	int		res;

	res = 1;
	while (str[c++] != '\n')
	{
		res++;
		if (str[c + 1] != '\n' && str[c + 1] != '\0')
		{
			c++;
			res++;
		}
	}
	return (res);
}

int			ft_count(char *str)
{
	int		c;
	int		tnb;

	c = 0;
	tnb = 0;
	while (str[c] != '\0')
	{
		if (ft_1t(str, c) == 20)
		{
			c += 21;
			tnb++;
		}
		else
			return (0);
	}
	return (tnb);
}

int			ft_count2(char *str) //fn shows the no. of tetriminos present
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

int			ft_4x4(char *str)
{
	if (ft_newline(str) == 0 && ft_count(str) != 0)
		return (0);
	return (1);
}
/*
int	main()
{
	char a[] = ".##.\n..##\n....\n....\n\n....\n....\n....\n....\n\n....\n....\n....\n....\n"; //correct form of 3 tetriminos
	char b[] = "...#\n....\n....\n....\n\n....\n"; //correct form of tetriminos + incorrect form
//	char c[] = "...#\n....\n....\n....\n"; //correct form of 1 tetriminos

//	printf("Must be 3: %d\n", ft_count(a));
//	printf("Must be 0: %d\n", ft_count(b));
//	printf("***************\n");
//	printf("A must be 3: %d\n", ft_count(a)); //displays 3 - correct
//	printf("***************\n");
//	printf("B must be 0: %d\n", ft_count(b));//displays 1 - incorrect
//	printf("***************\n");
//	printf("C must be 1: %d\n", ft_count(c));//displays 1 - correct
	printf("***************\n");
	printf("A Must be 0: %d\n", ft_v4x4(a)); //displays 0 - correct
	printf("***************\n");
	printf("B must be 1: %d\n", ft_v4x4(b)); //displays 0 - incorrect
	printf("***************\n");
	return (0);
}*/
