/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_counttetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 13:06:53 by gfranco           #+#    #+#             */
/*   Updated: 2018/08/30 15:52:46 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

size_t			ft_counttetri(char *str)
{
	size_t		len;

	len = ft_strlen(str);
	if ((len + 1) % 21 == 0)
		return ((len + 1) / 21);
	return (0);
}


//			INCOMPLET ! ! ! !
