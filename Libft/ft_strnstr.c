/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:25:19 by bkozluca          #+#    #+#             */
/*   Updated: 2022/03/16 11:55:30 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *dizi, const char *ara, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (*ara == 0)
		return ((char *)dizi);
	while (dizi[x] != 0 && x < len)
	{
		y = 0;
		while (dizi[x + y] == ara[y]
			&& ara[y] != 0 && y + x < len)
			y++;
		if (!ara[y])
			return ((char *)&dizi[x]);
		x++;
	}
	return (NULL);
}
