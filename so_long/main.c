/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 16:34:36 by bkozluca          #+#    #+#             */
/*   Updated: 2022/10/21 17:11:34 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	mapfilecontrol(t_img *so_long)
{
	int	fd;

	fd = open(so_long->map_input[1], O_RDONLY);
	if (fd <= 0)
	{
		write(1, "Olmayan harita", 14);
		exit(0);
	}
}

int	main(int argc, char **map_input)
{
	void	*mlx;
	void	*mlx_win;
	t_img	*img;

	if (argc != 2)
		return (write(1, "Argüman sayisi hatali!\n", 23));
	img = (t_img *)malloc(sizeof(t_img));
	mlx = mlx_init();
	img->mlx = mlx;
	img->map_input = map_input;
	mapfilecontrol(img);
	arg_control(img);
	definevariable(img);
	mlx_win = mlx_new_window(mlx, column_len(img) * 32,
			line_len(img) * 32, "so_long");
	img->mlx_win = mlx_win;
}
