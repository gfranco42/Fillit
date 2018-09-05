/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 11:36:58 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/03 16:30:43 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
#include <stdio.h>
/*
 * USE THIS MAIN FOR EVERY TEST
 *
 * Put tests for every function we make
 * Put a comment after each test to indicate which function is tested 
 *
 * Thank you girls!
*/

int     ft_overlap(char **str, int nbr); //cabdul-h added this

int				main(int ac, char **av)
{
	char		*str = ft_file_cpy(ac, av);
	char		**array = ft_file_split(str);
	int			nbr = ft_counttetri(str);
	int			***triple_arr;
//	t_pos		block;
	int			i = 0;
	int			k = 0;
//	char		**map = ft_makemap(5);
//	printf("ft_check = %d\n", ft_check(str));
//	printf("ft_is near = %d\n", ft_is_near(array));
//	printf("%s\n", array[0]);
//	printf("%s\n", array[1]);
	printf("overlap exists if this is 1: %d\n", ft_overlap(array, nbr)); //cabdul-h added this
	triple_arr = ft_stocktetri(array, nbr);

	free(triple_arr);
	while (i < nbr)
	{
		while (k < 4)
		{
			printf("x[%d]: \033[1;32m%d\033[0m y[%d]: \033[1;32m%d\033[0m\n", k, triple_arr[i][0][k], k, triple_arr[i][1][k]);
			k++;
		}
		printf("\n");
		i++;
		k = 0;
	}
	free(str);
	while (i < nbr)
	{
		free(array[i]);
		free(triple_arr[i][0]);
		free(triple_arr[i][1]);
		free(triple_arr[i]);
		i++;
	}
	free(array);
//	while (i < )
/*	block = ft_stockblocks(array[0]);
	printf("%s\n", map[0]);
	printf("%s\n", map[1]);
	printf("%s\n", map[2]);
	printf("%s\n", map[3]);
	map = ft_fill_tetri(map, block, 0, 0);
	printf("first fill:\n");
	printf("%s\n", map[0]);
	printf("%s\n", map[1]);
	printf("%s\n", map[2]);
	printf("%s\n", map[3]);
	block = ft_stockblocks(array[1]);
	map = ft_fill_tetri(map, block, 0, 2);
	printf("second fill:\n");
	printf("%s\n", map[0]);
	printf("%s\n", map[1]);
	printf("%s\n", map[2]);
	printf("%s\n", map[3]);
	block = ft_stockblocks(array[2]);
	map = ft_fill_tetri(map, block, 2, 3);
	printf("third fill:\n");
	printf("%s\n", map[0]);
	printf("%s\n", map[1]);
	printf("%s\n", map[2]);
	printf("%s\n", map[3]);
*/
/*
	char		*str;
	char		*test = "";
	char		**tab;
	char		**array;
	t_pos		block;
	int			i;
	int			idx;
	int			count;
	int			V;
	int			H;

	V = 0;
	H = 0;
	idx = 0;
	count = 4;
	str = ft_file_cpy(ac, av);
	array = ft_file_split(str);
	tab = ft_makemap(count);//							1) Creating the map
	i = 0;
	printf("\033[1;33mCLEAN MAP :\033[0m\n\n");
	while (count-- > 0)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	printf("\n");
	printf("\033[1;33mFILLED MAP :\033[0m\n\n");
	count = 4;
	block = ft_stockblocks(array[idx]);//		2) Stock tetris in an array
	while (count-- > 0)
	{
		printf("x: %d y: %d\n", block.x[i], block.y[i]);
		i++;
	}
	count = 4;
	tab = ft_fill_tetri(tab, block, V, H);//	3)Put tetri from block
	block = ft_stockblocks(array[idx + 1]);
	while (count-- > 0)
	{
		printf("x: %d y: %d\n", block.x[i], block.y[i]);
		i++;
	}
	count = 4;
	tab = ft_fill_tetri(tab, block, V, H);
	//													to tab
	i = 0;
	while (count-- > 0)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	printf("\n");
	free(tab);*/
/*	char	**array;
	char	*str;
	size_t		i;
//	str = ft_makemap(15);
//	printf("\033[1;32mMAP:\033[0m\n%s\n", str);
//	free(str);
	i = 0;
	str = ft_file_cpy(ac, av);//		CHANGER FONCTION CHECK2 !!!!
	array = ft_file_split(str);
	i = ft_check(str);//				TAPER MAKE RE POUR VOIR
	printf("Must display 0...\nresult : %zu\n", i);
	printf("len = %zu\n", ft_strlen(str));
	printf("\033[0;32mft_is_near : %d\n\033[0m", ft_is_near(array));

	while (i < ft_counttetri(str))
	{
		printf("%s", array[i]);
		i++;
	}
	printf("check : %d\n", ft_check(str));
	printf("is near : %d\n", ft_is_near(array));
	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}*/
//	free(array);
//	array = NULL;
//
//	printf("%s\n", ft_file_cpy(ac, av));//				--->TEST OPENING FILE
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
//	char	sL1[] = "##..\n.##.\n....\n....\n";//								---> test with ft_check.c TRUE
//	char	sL2[] = "###.\n..#.\n....\n....\n";//								---> test with ft_check.c TRUE
//	char	sL3[] = "####\n....\n....\n....\n";//								---> test with ft_check.c TRUE
//	char	sL4[] = "#...\n###.\n....\n....\n";//								---> test with ft_check.c TRUE
//	char	sL5[] = "##..\n##..\n....\n....\n";//								---> test with ft_check.c TRUE
//	char	sL6[] = "#...\n#...\n#...\n#...\n";//								---> test with ft_check.c TRUE
//	char	sL7[] = "##..\n#...\n#...\n....\n";//								---> test with ft_check.c TRUE
//	char	sL8[] = ".#..\n.#..\n##..\n....\n";//								---> test with ft_check.c TRUE
//	char	sL9[] = ".#..\n##..\n#...\n....\n";//								---> test with ft_check.c TRUE
//	char	sL10[] = "#...\n##..\n.#..\n....\n";//								---> test with ft_check.c TRUE
//	char	sL11[] = ".##.\n##..\n....\n....\n";//								---> test with ft_check.c TRUE
//	char	sL12[] = "#...\n#...\n##..\n....\n";//								---> test with ft_check.c TRUE
//	char	sL13[] = "..#.\n###.\n....\n....\n";//								---> test with ft_check.c TRUE
//	char	sL14[] = "##..\n.#..\n.#..\n....\n";//								---> test with ft_check.c TRUE
//	char	sL15[] = "###.\n#...\n....\n....\n";//								---> test with ft_check.c TRUE
//	char	sL16[] = ".#..\n###.\n....\n....\n";//								---> test with ft_check.c TRUE
//	char	sL17[] = "#...\n##..\n#...\n....\n";//								---> test with ft_check.c TRUE
//	char	sL18[] = "###.\n.#..\n....\n....\n";//								---> test with ft_check.c TRUE
//	char	sL19[] = ".#..\n##..\n.#..\n....\n";//								---> test with ft_check.c TRUE
//	char	sM[] = "...#\n...#\n...#\n...#\n\n####\n....\n....\n....\n";//		---> test with ft_check.c TRUE
//	char	sM2[] = "....\n....\n....\n####\n\n####\n....\n....\n....\n";//		---> test with ft_check.c TRUE
//	char	sM3[] = "....\n....\n....\n####\n\n####\n....\n....\n....\n\n####\n....\n....\n....\n\n####\n....\n....\n....\n";//		---> test with ft_check.c TRUE
//	char	sN1[] = "##..\n..##\n##..\n....\n";//								---> test with ft_check.c FALSE
//	char	sN2[] = "##.#\n...#\n....\n....\n\n##..\n....\n....\n....\n";//		---> test with ft_check.c FALSE
//	char	sN3[] = "##..\n....\n....\n..##\n";//								---> test with ft_check.c FALSE
//	char	sN4[] = "#..#\n....\n....\n#..#\n";//								---> test with ft_check.c FALSE
//	char	sN5[] = "##.#\n.#..\n....\n....\n";//								---> test with ft_check.c FALSE
//	char	sN6[] = "#...\n.#..\n#.#.\n....\n";//								---> test with ft_check.c FALSE
//	char	sN7[] = "#...\n#...\n###.\n....\n";//								---> test with ft_check.c FALSE
//
//	char	sO[] = "...#\n.#..\n..#.\n..#.\n\n###.\n";//						---> test with ft_bad_char.c ==> TRUE
//	char	sP[] = "...o\n.\t..\n..u.\n..1.\n\n444.\n";//						---> test with ft_bad_char.c ==> FALSE

//	char	sQ[] = "...#\n...#\n...#\n...#\n";//								---> test with ft_is_near.c ==> TRUE
//	char	sR[] = ".#..\n##..\n#...\n....\n\n.#..\n###.\n....\n....\n";//		---> test with ft_is_near.c ==> TRUE
//	char	sS[] = "#...\n#...\n...#\n...#\n";//								---> test with ft_is_near.c ==> FALSE
//	char	sT[] = "##.\n....\n....\n..##\n";//									---> test with ft_is_near.c ==> FALSE
//
//	char	sU[] = "...#\n...#\n...#\n..#.\n\n...#\n..##\n..#.\n....\n\n####\n....\n....\n....\n";//	---> test with ft_counttetri.c ==> TRUE
//	char	sV[] = "...#\n...#\n...#\n..#.\n\n....\n....\n....\n1234\n";//								---> test with ft_counttetri.c ==> TRUE
//	char	sW[] = "...#\n...#\n...#\n..#.\n....\n";//													---> test with ft_counttetri.c ==> FALSE
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
//	printf("\033[1;31m*** TEST 'sL1' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sL1));
//	printf("\033[1;31m*** TEST 'sL2' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sL2));
//	printf("\033[1;31m*** TEST 'sL3' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sL3));
//	printf("\033[1;31m*** TEST 'sL4' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sL4));
//	printf("\033[1;31m*** TEST 'sL5' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sL5));
//	printf("\033[1;31m*** TEST 'sL6' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sL6));
//	printf("\033[1;31m*** TEST 'sL7' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sL7));
//	printf("\033[1;31m*** TEST 'sL8' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sL8));
//	printf("\033[1;31m*** TEST 'sL9' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sL9));
//	printf("\033[1;31m*** TEST 'sL10' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sL10));
//	printf("\033[1;31m*** TEST 'sL11' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sL11));
//	printf("\033[1;31m*** TEST 'sL12' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sL12));
//	printf("\033[1;31m*** TEST 'sL13' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sL13));
//	printf("\033[1;31m*** TEST 'sL14' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sL14));
//	printf("\033[1;31m*** TEST 'sL15' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sL15));
//	printf("\033[1;31m*** TEST 'sL16' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sL16));
//	printf("\033[1;31m*** TEST 'sL17' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sL17));
//	printf("\033[1;31m*** TEST 'sL18' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sL18));
//	printf("\033[1;31m*** TEST 'sL19' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sL19));
//	printf("\033[1;31m*** TEST 'sM' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sM));
//	printf("\033[1;31m*** TEST 'sM2' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sM2));
//	printf("\033[1;31m*** TEST 'sM3' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sM3));
//	printf("\033[1;31m*** TEST 'sN1' ***\033[1;37m\nIf Correct -> \033[0;32m!=0\033[1;37m\nIf Error   -> \033[0;31m0\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sN1));
//	printf("\033[1;31m*** TEST 'sN2' ***\033[1;37m\nIf Correct -> \033[0;32m!=0\033[1;37m\nIf Error   -> \033[0;31m0\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sN2));
//	printf("\033[1;31m*** TEST 'sN3' ***\033[1;37m\nIf Correct -> \033[0;32m!=0\033[1;37m\nIf Error   -> \033[0;31m0\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sN3));
//	printf("\033[1;31m*** TEST 'sN4' ***\033[1;37m\nIf Correct -> \033[0;32m!=0\033[1;37m\nIf Error   -> \033[0;31m0\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sN4));
//	printf("\033[1;31m*** TEST 'sN5' ***\033[1;37m\nIf Correct -> \033[0;32m!=0\033[1;37m\nIf Error   -> \033[0;31m0\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sN5));
//	printf("\033[1;31m*** TEST 'sN6' ***\033[1;37m\nIf Correct -> \033[0;32m!=0\033[1;37m\nIf Error   -> \033[0;31m0\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sN6));
//	printf("\033[1;31m*** TEST 'sN7' ***\033[1;37m\nIf Correct -> \033[0;32m!=0\033[1;37m\nIf Error   -> \033[0;31m0\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_check(sN7));

//	printf("\033[1;31m*** TEST 'sO' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m1\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_bad_char(sO));
//	printf("\033[1;31m*** TEST 'sP' ***\033[1;37m\nIf Correct -> \033[0;32m1\033[1;37m\nIf Error   -> \033[0;31m0\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_bad_char(sP));

//	printf("\033[1;31m*** TEST 'sQ' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m!=0\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_is_near(sQ));
//	printf("\033[1;31m*** TEST 'sR' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m!=0\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_is_near(sR));
//	printf("\033[1;31m*** TEST 'sS' ***\033[1;37m\nIf Correct -> \033[0;32m!=0\033[1;37m\nIf Error   -> \033[0;31m0\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_is_near(sS));
//	printf("\033[1;31m*** TEST 'sT' ***\033[1;37m\nIf Correct -> \033[0;32m!=0\033[1;37m\nIf Error   -> \033[0;31m0\033[1;37m\nResult     -> \033[1;34m%d\n\n", ft_is_near(sT));

//	printf("\033[1;31m*** TEST 'sU' ***\033[1;37m\nIf Correct -> \033[0;32m!=0\033[1;37m\nIf Error   -> \033[0;31m0\033[1;37m\nResult     -> \033[1;34m%zu\n\n", ft_counttetri(sU));
//	printf("\033[1;31m*** TEST 'sV' ***\033[1;37m\nIf Correct -> \033[0;32m!=0\033[1;37m\nIf Error   -> \033[0;31m0\033[1;37m\nResult     -> \033[1;34m%zu\n\n", ft_counttetri(sV));
//	printf("\033[1;31m*** TEST 'sW' ***\033[1;37m\nIf Correct -> \033[0;32m0\033[1;37m\nIf Error   -> \033[0;31m!=0\033[1;37m\nResult     -> \033[1;34m%zu\n\n", ft_counttetri(sW));
	return (0);
}
