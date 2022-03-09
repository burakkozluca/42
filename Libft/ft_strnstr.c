/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakkozluca <burakkozluca@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:25:19 by bkozluca          #+#    #+#             */
/*   Updated: 2022/03/09 07:59:32 by burakkozluc      ###   ########.fr       */
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
int main(void)
{
	printf("***  ft_strnstr  ***\ndizi dizisinde ara dizisini arar len uzunluğuna kadar. \nbulduğu karakterden sonrasını döndürür. \nbulunmaz ise NULL döner");
	char s1[30] = "pen pineapple apple pen!";
	char* ptr = ft_strnstr(s1, "n", 10);
	printf("\n%s\n", ptr);
	char* ptr1 = ft_strnstr(s1, "en", 3);
	printf("%s\n", ptr1);
}
