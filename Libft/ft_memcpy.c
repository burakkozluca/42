/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:55:24 by bkozluca          #+#    #+#             */
/*   Updated: 2022/02/16 13:05:49 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*ptr;
	char	*ptrsrc;

	ptrsrc = (char *)src;
	ptr = dst;
	if ((dst == src) || n == 0)
		return (dst);
	while (n - 1 > 0)
	{
		*ptr++ = *ptrsrc++;
	}
	return (dst);
}
