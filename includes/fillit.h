/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:00:06 by gfranco           #+#    #+#             */
/*   Updated: 2018/09/16 16:04:45 by gfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft.h"

typedef struct		s_pos
{
	int		x[4];
	int		y[4];
}					t_pos;

typedef struct		s_dir
{
	int		x;
	int		y;
	int		ms;
	int		num;
}					t_dir;

int					ft_bt(char **map, int ***array, int nbr, t_dir dir);
int					ft_check(char *str);
size_t				ft_counttetri(char *str);
char				*ft_file_cpy(int ac, char **av);
char				**ft_file_split(char *str);
int					ft_final_print(char **map, int num, t_dir dir);
char				**ft_free_tab(char **tab, t_dir dir);
int					ft_is_near(char **array, int nbr);
int					ft_just_one(char *str);
char				**ft_makemap(int size);
int					ft_print_map(char **map, int nbr, t_dir dir);
t_pos				ft_stockblocks(char *str);
int					***ft_stocktetri(char **str, int nbr);
char				**ft_strsplit(char const *s, char c);
char				**ft_upsize_map(int size, char **map);

#endif
