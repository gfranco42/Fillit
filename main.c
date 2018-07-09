/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 11:36:58 by gfranco           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/07/09 17:02:41 by gfranco          ###   ########.fr       */
=======
/*   Updated: 2018/07/04 23:39:13 by cabdul-h         ###   ########.fr       */
>>>>>>> 72e3a03d2a0d75f11f1447a3b2d8e3deb34e173d
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
<<<<<<< HEAD
//	char	sA[] = "....\n....\n....\n....\n\n....\n....\n....\n....\n";//		---> test with ft_4x4.c
//	char	sB[] = "....\n....\n....\n....\n\n....\n";//						---> test with ft_4x4.c
//	char	sC[] = "....\n....\n....\n....\n";//								---> test with ft_4x4.c
//
//	char	sD[] = "...#\n.#..\n..#.\n..#.\n\n####\n....\n....\n....\n";//		---> test with ft_count_hash.c ==> TRUE
//	char	sE[] = "....\n....\n..#.\n....\n\n....\n";//						---> test with ft_count_hash.c ==> FALSE
//	char	sF[] = "....\n....\n..#.\n.###\n";//								---> test with ft_count_hash.c ==> TRUE
//
//	char	sG[] = "...#\n.#..\n..#.\n..#.\n\n####\n....\n....\n....\n";//		---> test with ft_count_dot.c ==> TRUE
//	char	sH[] = "...#\n.#..\n..#.\n..#.\n\n####\n";//						---> test with ft_count_dot.c ==> TRUE
//	char	sI[] = "...#\n.#..\n..#.\n..#.\n\n###.\n....\n....\n....\n";//		---> test with ft_count_dot.c ==> FALSE
//
//	char	sJ[] = "...#\n.#..\n..#.\n..#.\n\n###.\n....\n....\n....\n";//		---> test with ft_count_bn.c ==> TRUE
//	char	sK[] = "...#\n.#..\n..#.\n..#.\n\n###.\n";//						---> test with ft_count_bn.c ==> FALSE
//
//	char	sL[] = ".#..\n##..\n#...\n....\n";//								---> test with ft_check.c TRUE
//	char	sM[] = "...#\n...#\n...#\n...#\n\n####\n....\n....\n....\n";//		---> test with ft_check.c TRUE
//	char	sN[] = "...#\n.#..\n..#.\n...#\n";//								---> test with ft_check.c FALSE
//
//	char	sO[] = "...#\n.#..\n..#.\n..#.\n\n###.\n";//						---> test with ft_bad_char.c ==> TRUE
//	char	sP[] = "...o\n.\t..\n..u.\n..1.\n\n444.\n";//						---> test with ft_bad_char.c ==> FALSE

//	char	sQ[] = "...#\n...#\n...#\n...#\n";//								---> test with ft_is_near.c ==> TRUE
//	char	sR[] = ".#..\n##..\n#...\n....\n\n.#..\n###.\n....\n....\n";//		---> test with ft_is_near.c ==> TRUE
//	char	sS[] = "...#\n..#.\n.#..\n#...\n";//								---> test with ft_is_near.c ==> FALSE
//	char	sT[] = "...#\n...#\n...#\n..#.\n";//								---> test with ft_is_near.c ==> FALSE
//
//	printf("\033[1;31m*** TEST 'sA' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_4x4(sA));
//	printf("\033[1;31m*** TEST 'sB' ***\033[1;37m\nIf Correct -> \033[0;32m1\033[1;37m\nIf Error   -> \033[0;31m0\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_4x4(sB));
//	printf("\033[1;31m*** TEST 'sC' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_4x4(sC));
//
//	printf("\033[1;31m*** TEST 'sD' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_count_hash(sD));
//	printf("\033[1;31m*** TEST 'sE' ***\033[1;37m\nIf Correct -> \033[0;32m1\033[1;37m\nIf Error   -> \033[0;31m0\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_count_hash(sE));
//	printf("\033[1;31m*** TEST 'sF' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_count_hash(sF));
//
//	printf("\033[1;31m*** TEST 'sG' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_count_dot(sG));
//	printf("\033[1;31m*** TEST 'sH' ***\033[1;37m\nIf Correct -> \033[0;32m1\033[1;37m\nIf Error   -> \033[0;31m0\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_count_dot(sH));
//	printf("\033[1;31m*** TEST 'sI' ***\033[1;37m\nIf Correct -> \033[0;32m1\033[1;37m\nIf Error   -> \033[0;31m0\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_count_dot(sI));
//
//	printf("\033[1;31m*** TEST 'sJ' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_count_bn(sJ));
//	printf("\033[1;31m*** TEST 'sK' ***\033[1;37m\nIf Correct -> \033[0;32m1\033[1;37m\nIf Error   -> \033[0;31m0\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_count_bn(sK));
//
//	printf("\033[1;31m*** TEST 'sL' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sL));
//	printf("\033[1;31m*** TEST 'sM' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sM));
//	printf("\033[1;31m*** TEST 'sN' ***\033[1;37m\nIf Correct -> \033[0;32m1\033[1;37m\nIf Error   -> \033[0;31m0\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sN));

//	printf("\033[1;31m*** TEST 'sO' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_bad_char(sO));
//	printf("\033[1;31m*** TEST 'sP' ***\033[1;37m\nIf Correct -> \033[0;32m1\033[1;37m\nIf Error   -> \033[0;31m0\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_bad_char(sP));

//	printf("\033[1;31m*** TEST 'sQ' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m!=0\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_is_near(sQ));
//	printf("\033[1;31m*** TEST 'sR' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m!=0\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_is_near(sR));
//	printf("\033[1;31m*** TEST 'sS' ***\033[1;37m\nIf Correct -> \033[0;32m!=0\033[1;37m\nIf Error   -> \033[0;31m0\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_is_near(sS));
//	printf("\033[1;31m*** TEST 'sT' ***\033[1;37m\nIf Correct -> \033[0;32m!=0\033[1;37m\nIf Error   -> \033[0;31m0\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_is_near(sT));
=======
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
>>>>>>> 72e3a03d2a0d75f11f1447a3b2d8e3deb34e173d
	return (0);
}
