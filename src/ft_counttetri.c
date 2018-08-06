/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_counttetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 13:06:53 by gfranco           #+#    #+#             */
/*   Updated: 2018/08/06 14:41:28 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

size_t			ft_counttetri(char *str)
{
	size_t		len;

	len = ft_strlen(str);
	if (len % 21 == 0)
		return (len / 21);
	return (0);
}


//			INCOMPLET ! ! ! !
