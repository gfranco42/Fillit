#include "../includes/fillit.h"
#include <stdio.h>
#define BUF_SIZE 4096

size_t		test(int ac, char **av)
{
	size_t		res;
	int			fd;
	int			i;
	char		buf[BUF_SIZE + 1];

	i = 0;
	fd = open(av[1], O_RDONLY);
	res = read(fd, buf, BUF_SIZE);
	buf[res] = '\0';
	return (res);
}


/*
 *	THIS TEST GIVES US 2 THINGS:
 *	1) THE FILE AS STRING
 *	2) THE NUMBER OF CHAR IN THE FILE
 * */
