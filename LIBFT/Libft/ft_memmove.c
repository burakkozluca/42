/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:14:14 by bkozluca          #+#    #+#             */
/*   Updated: 2022/02/01 17:02:42 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr;
	char	*ptrsrc;

	ptr = dst;
	ptrsrc = src;
	while (len - 1 > 0)
	{
		*ptr++ = *ptrsrc++;
	}
	return (dst);
}
