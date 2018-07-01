/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 11:36:58 by gfranco           #+#    #+#             */
/*   Updated: 2018/07/01 18:31:37 by gfranco          ###   ########.fr       */
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
	char	sA[] = "....\n....\n....\n....\n\n....\n....\n....\n....\n";//		---> "Valid" tetriminos's size (2 blocs).
	char	sB[] = "....\n....\n....\n....\n\n....\n";//						---> 1 valid bloc but the second one is false.
//	char	sC[] = "ABCDEFGHIJKLMNOP";//										---> it's not a tetriminos.

	printf("\033[1;31m*** TEST 'sA' ***\033[1;37m\nIf Correct -> 0\nIf Error   -> 1\nResult     -> %d\n", ft_4x4(sA));
	printf("\033[1;31m*** TEST 'sB' ***\033[1;37m\nIf Correct -> 1\nIf Error   -> 0\nResult     -> %d\n", ft_4x4(sB));
	return (0);
}
