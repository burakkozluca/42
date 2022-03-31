/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:55:24 by bkozluca          #+#    #+#             */
/*   Updated: 2022/03/02 10:34:22 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char	*ptr;
	char	*ptrsrc;

	ptrsrc = (char *)src;
	ptr = dst;
	if ((dst == src) || len == 0)
		return (dst);
	while (len-- > 0)
	{
		*ptr++ = *ptrsrc++;
	}
	return (dst);
}
