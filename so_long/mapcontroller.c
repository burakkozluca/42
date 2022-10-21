/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapcontroller.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:02:06 by bkozluca          #+#    #+#             */
/*   Updated: 2022/10/21 16:47:17 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	arg_control(t_img *so_long)
{
	int	len;

	len = ft_strlen(so_long->map_input[1]);
	if (so_long->map_input[1][len - 1] != 'r'
	|| so_long->map_input[1][len - 2] != 'e')
	{
		write(1, "Harita Uzantisi Hatali\n", 23);
		exit(1);
	}
	if (so_long->map_input[1][len - 3] != 'b'
	|| so_long->map_input[1][len - 4] != '.')
	{
		write(1, "Harita Uzantisi Hatali\n", 23);
		exit(1);
	}
}
