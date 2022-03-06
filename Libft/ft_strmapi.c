/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:33:27 by bkozluca          #+#    #+#             */
/*   Updated: 2022/03/06 18:40:32 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*src_ptr;
	int		src_len;
	int		i;

	i = 0;
	if (!s)
		return (0);
	src_len = ft_strlen(s);
	src_ptr = (char *) malloc((src_len + 1) * sizeof(char));
	if (!src_ptr)
		return (0);
	while (i < src_len)
	{
		src_ptr[i] = f(i, (char )(s[i]));
		i++;
	}
	src_ptr[i] = '\0';
	return (src_ptr);
}
char f(unsigned int i, char c)
{
	char str;
	str = c + 3;
	return (str);
}
int main(void)
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
}
