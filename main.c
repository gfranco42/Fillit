/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 11:36:58 by gfranco           #+#    #+#             */
/*   Updated: 2018/07/04 23:39:13 by cabdul-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>
/*
 * USE THIS MAIN FOR EVERY TEST
 *
 * Put tests for every function we make
 * Put a comment after each test to indicate which function is tested 
 *
 * Thank you girls!
*/

int		main(/*int argc, char **argv*/)
{
	char	sA[] = "...#\n...#\n...#\n...#\n\n.#..\n.#..\n.#..\n.#..\n";//		---> Valid tetriminos's size (2 blocs).
	char	sB[] = "...#\n...#\n...#\n...#\n\n.#..\n";//						---> 1 valid bloc but the second one is false.
//	char	sC[] = "ABCDEFGHIJKLMNOP";//										---> it's not a tetriminos.
	char	sD[] = "...#\n...#\n...#\n...#\n";//						        ---> 1 valid tetris
	char	sE[] = "";							//						        ---> blank string

	printf("\033[1;31m*** TEST 'sA' ***\033[1;37m\nIf Correct -> 0\nIf Error   -> 1\nResult     -> %d\n", ft_4x4(sA)); //shows 0 - correct
	printf("\033[1;31m*** TEST 'sB' ***\033[1;37m\nIf Correct -> 1\nIf Error   -> 0\nResult     -> %d\n", ft_4x4(sB)); //shows 1 - correct
	printf("\033[1;31m*** TEST 'sD' ***\033[1;37m\nIf Correct -> 0\nIf Error   -> 0\nResult     -> %d\n", ft_4x4(sD)); //shows 0 - correct
	printf("\033[1;31m*** TEST 'sA' ***\033[1;37m\nIf Correct -> 0\nIf Error   -> 0\nResult     -> %d\n", ft_check(sA)); //shows 0 - correct
	printf("\033[1;31m*** TEST 'sB' ***\033[1;37m\nIf Correct -> 1\nIf Error   -> 0\nResult     -> %d\n", ft_check(sB)); //shows 1 - correct
	printf("\033[1;31m*** TEST 'sD' ***\033[1;37m\nIf Correct -> 0\nIf Error   -> 0\nResult     -> %d\n", ft_check(sD)); //shows 0 - correct
	printf("\033[1;31m*** TEST 'sE' ***\033[1;37m\nIf Correct -> 1\nIf Error   -> 0\nResult     -> %d\n", ft_check(sE)); //shows 1 - correct
	return (0);
}
