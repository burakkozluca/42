/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:04:14 by bkozluca          #+#    #+#             */
/*   Updated: 2022/03/02 17:41:57 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen(s);
	while (len-- >= 0)
		if (s[len] == c)
			return ((char *)&s[len]);
	return (NULL);
}

int	main(void)
{
	printf("***  ft_strrchr  ***\ns dizisinin sonunda aramaya başlar\nbulduğu andan sonraki karakterleri bastırır.");
	char* str = "a1 a5 a3 a4 a5 a6";
	printf("%s\n", ft_strrchr(str, '5'));
	printf("%s\n", strrchr(str, '5'));
}
