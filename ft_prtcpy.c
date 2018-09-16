/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 11:52:57 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/13 14:44:34 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

char			*ft_prtcpy(char *dst, const char *src, size_t n, size_t save)
{
	size_t		a;

	a = 0;
	while (a < n && src[save] != '\0')
	{
		dst[a] = src[save];
		a++;
		save++;
	}
	while (a < n)
	{
		dst[a] = '\0';
		a++;
	}
	return (dst);
}
