/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:53:44 by gfranco           #+#    #+#             */
/*   Updated: 2018/07/13 13:12:31 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./includes/fillit.h"
#include <stdio.h>

void	recursive(int a, int b)
{
	if (recursive(a+1, 1) == true)
		return (true);
		
	return (res);
}

int		main()
{
	recursive(1, 15);
	return (0);
}


