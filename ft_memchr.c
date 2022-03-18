/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:57:50 by bkozluca          #+#    #+#             */
/*   Updated: 2022/03/16 11:51:43 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	unsigned char	*str;
	int				i;

	str = (unsigned char *)ptr;
	i = 0;
	if (n == 0)
		return (0);
	while (n-- > 0)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)ptr + i);
		i++;
	}
	if (c == '\0')
		return ((void *)ptr + i);
	return (NULL);
}
