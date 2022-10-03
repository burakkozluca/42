/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 16:34:36 by bkozluca          #+#    #+#             */
/*   Updated: 2022/10/03 13:58:24 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(void)
{
	t_data	data;

	data.img = mlx_init();
	data.height = mlx_new_window(data.img, 600, 480, "Hello World!");
	mlx_key_hook(data.height, mlx_hook, &data);
	mlx_loop(data.img);
}
