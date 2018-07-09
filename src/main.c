/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 11:36:58 by gfranco           #+#    #+#             */
/*   Updated: 2018/07/09 17:29:01 by gfranco          ###   ########.fr       */
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
	char	sU[] = "...#\n...#\n...#\n..#.\n\n...#\n..##\n..#.\n....\n\n####\n....\n....\n....\n";//	---> test with ft_counttetri.c ==> TRUE
	char	sV[] = "...#\n...#\n...#\n..#.\n\n....\n....\n....\n1234\n";//								---> test with ft_counttetri.c ==> TRUE
	char	sW[] = "...#\n...#\n...#\n..#.\n....\n";//													---> test with ft_counttetri.c ==> FALSE
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

	printf("\033[1;31m*** TEST 'sU' ***\033[1;37m\nIf Correct -> \033[0;32m!=0\033[1;37m\nIf Error   -> \033[0;31m0\033[1;37m\nResult     -> \033[1;34m%zu\n\n", ft_counttetri(sU));
	printf("\033[1;31m*** TEST 'sV' ***\033[1;37m\nIf Correct -> \033[0;32m!=0\033[1;37m\nIf Error   -> \033[0;31m0\033[1;37m\nResult     -> \033[1;34m%zu\n\n", ft_counttetri(sV));
	printf("\033[1;31m*** TEST 'sW' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m!=0\033[1;37m\nResult     -> \033[1;34m%zu\n\n", ft_counttetri(sW));
	return (0);
}
