/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:55:04 by bkozluca          #+#    #+#             */
/*   Updated: 2022/10/21 17:05:42 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	definevariable(t_img *so_long)
{
	int	a;

	a = 32;
	so_long->h = &a;
	so_long->w = &a;
	so_long->coin = 0;
	so_long->g_move = 0;
	so_long->index = 0;
	so_long->len_x = line_len(so_long);
	so_long->len_y = column_len(so_long);
}

int	line_len(t_img *so_long)
{
	int		fd;
	char	c;
	int		i;

	i = 0;
	fd = open(so_long->map_input[1], O_RDONLY);
	while (read(fd, &c, i) >= 1)
	{
		if (ft_strchr(&c, '\n'))
			i++;
	}
	close(fd);
	return (i);
}

int	column_len(t_img *so_long)
{
	int		fd;
	char	*line;
	int		i;

	fd = open(so_long->map_input[1], O_RDONLY);
	line = get_next_line(fd);
	i = ft_strlen(line) - 1;
	free(line);
	close(fd);
	return (i);
}
