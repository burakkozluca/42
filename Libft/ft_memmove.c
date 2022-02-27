/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:14:14 by bkozluca          #+#    #+#             */
/*   Updated: 2022/02/27 18:02:17 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_ptr;
	char	*src_ptr;

	if (!dst && !src)
		return (NULL);
	dst_ptr = (char *)dst;
	src_ptr = (char *)src;
	if (dst_ptr > src_ptr)
	{
		while (len-- > 0)
			*(dst_ptr + len) = *(src_ptr + len);
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*(dst_ptr + i) = *(src_ptr + i);
			i++;
		}
	}
	return (dst);
}
int main(void)
{
	printf("***  ft_memmove  *** \nkopyalanacak konuma gider ara belleğe \nve kopyalananı ara belleğe yapıştırır.\nBu nedenle, hız memcpyve kararlılıkmemmove\n");
	char str1[] = "0123";
	char str2[] = "567891";
	printf("str1 before : %s\n", str1);
	ft_memmove(str1, str2, 5);
	printf("str1 after  : %s\n", str1);
}
