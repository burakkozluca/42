/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:57:10 by bkozluca          #+#    #+#             */
/*   Updated: 2022/03/30 09:51:51 by bkozluca         ###   ########.fr       */
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
int main()
{
	char s1[] = "abda";
	char s2[] = "abdefg";
	printf("%d\n", ft_memcmp(s1, s2, 4));
	printf("%d\n", ft_memcmp(s1, s2, 8));
}
