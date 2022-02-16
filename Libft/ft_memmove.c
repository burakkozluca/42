/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:14:14 by bkozluca          #+#    #+#             */
/*   Updated: 2022/02/16 13:05:33 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr;
	char	*ptrsrc;

	ptr = dst;
	ptrsrc = (char *)src;
	if (dst > src)
	{
		while (len - 1 > 0)
		{
			*ptr++ = *ptrsrc++;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
