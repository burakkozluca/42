/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:57:10 by bkozluca          #+#    #+#             */
/*   Updated: 2022/03/02 17:41:51 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n-- > 0)
	{
		if (*str1++ != *str2++)
			return ((int)(str1[-1] - str2[-1]));
	}
	return (0);
}

int main(void)
{
	printf("***  ft_memcmp  ***\ns1 dizisi ile s2 dizsimi n karakerlerini kadar karşılaştırır. hangi char karakterlerini karşılaştırı s1 dizisi s2 den büyük-küçük-eşit olabilir.*/");
	char s1[] = "abdaadasd";
	char s2[] = "abdefgadsgsdff";
	printf("\n%d\n", ft_memcmp(s1, s2, 10));
	printf("%d\n", ft_memcmp(s1, s2, 10));
	printf("\n%d\n", memcmp(s1, s2, 10));
	printf("%d\n", memcmp(s1, s2, 10));
}
