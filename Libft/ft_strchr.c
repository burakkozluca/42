/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:36:24 by bkozluca          #+#    #+#             */
/*   Updated: 2022/03/02 17:41:55 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s++)
	{
		if (*s == c)
			return ((char *)s);
	}
	return (0);
}
int main(void)
{
	printf("***  ft_strrchr  ***\ns dizisinin sonunda aramaya başlar\nbulduğu andan sonraki karakterleri bastırır.");
	char* str = "a1 a5 a3 a4 a5 a6";
	printf("%s\n", ft_strrchr(str, '5'));
}
