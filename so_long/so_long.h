/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 16:34:50 by bkozluca          #+#    #+#             */
/*   Updated: 2022/10/21 17:05:55 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "mlx/mlx.h"
# include "get_next_line/get_next_line.h"

typedef struct s_img
{
	void	*mlx;
	void	*mlx_win;
	char	**map_input;
	char	**map;
	int		*w;
	int		*h;
	int		coin;
	int		index;
	int		g_move;
	int		len_x;
	int		len_y;
}	t_img;

void	mapfilecontrol(t_img *so_long);
void	arg_control(t_img *so_long);

//UTILS
void	definevariable(t_img *so_long);
int		line_len(t_img *so_long);
int		column_len(t_img *so_long);

#endif
