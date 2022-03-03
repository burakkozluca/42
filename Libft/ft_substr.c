/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:58:13 by bkozluca          #+#    #+#             */
/*   Updated: 2022/03/03 17:43:25 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (start >= ft_strlen(s))
		return (str);
	while (i < len && s[start] != '\0')
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	printf("s dizisinin start tan başlayıp len kadar geri gönderir");
	char* str;
	str = ft_substr("Hello World!", 7, 2);
	printf("\n%s\n", str);
}
