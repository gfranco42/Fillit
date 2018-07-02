/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4x4.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 18:50:53 by gfranco           #+#    #+#             */
/*   Updated: 2018/07/02 23:28:24 by cabdul-h         ###   ########.fr       */
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
int		ft_1t(char *str, int c) //fn counts the no. of elements within the first tetris, excluding the newlines, and renders desired result of 20 if correct form given
{
	int		res; //might need to change this fn to give an outcome if just 1 tetris exists

	res = 1; //placeholder for output value
	while (str[c++] != '\n') //while there's no new line
	{
		res++; //increment res
		if (str[c + 1] != '\n' && str[c + 1] != '\0') //if following item is not a newline and not the end of the string
		{
			c++; //increment c
			res++; //increment res
		}
	}
	return (res); //returns 20 if correct form in terms of qty given
}

int			ft_count(char *str) //fn shows no. of tetris present in string
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
//this fn is not used in the main/makefile
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

int			ft_v4x4(char *str)
{
	if (ft_newline(str) == 0 && ft_count(str) != 0) //could include if tetris == 1, then it's correct too
		return (0);
	return (1);
}

int	main()
{
	char a[] = ".##.\n..##\n....\n....\n\n....\n....\n....\n....\n\n....\n....\n....\n....\n"; //correct form of 3 tetriminos
	char b[] = "...#\n....\n....\n....\n\n....\n"; //correct form of tetriminos + incorrect form
	char c[] = "...#\n....\n....\n....\n"; //correct form of 1 tetriminos
	int	d = 0;
	char e[] = ".\n.\n.\n..\n"; //incorrect form of 1 tetriminos

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
	printf("B must be 1: %d\n", ft_v4x4(b)); //displays 1 - correct
	printf("***************\n");
	printf("C must be 0: %d\n", ft_v4x4(c)); //displays 1 - incorrect*******************************
	printf("***************\n");
	printf("A must be : %d\n", ft_1t(a, d)); //displays 20
	printf("B must be : %d\n", ft_1t(b, d)); //displays 20
	printf("C must be : %d\n", ft_1t(c, d)); //displays 20
	printf("E must be : %d\n", ft_1t(e, d));
	printf("***************\n");
	printf("A has: %d tetris\n", ft_count(a)); //displays 3 - correct
	printf("B has: %d tetris\n", ft_count(b)); //displays 0 - correct
	printf("C has: %d tetris\n", ft_count(c)); //displays 0 - incorrect **************** could change the ft_1t to show that this is 1 tetris
	printf("E has: %d tetris\n", ft_count(e));
	printf("***************\n");
	printf("A has: %d \n", ft_count2(a)); //displays 3 - correct
	return (0);
}
