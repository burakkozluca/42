/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakkozluca <burakkozluca@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 12:39:19 by bkozluca          #+#    #+#             */
/*   Updated: 2022/03/07 13:18:10 by burakkozluc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
char	*ft_strchr(const char *s, int c)
{
	while (*s++)
	{
		if (*s == c)
			return ((char *)s);
	}
	return (0);
}
char	*ft_strdup(const char *src)
{
	char	*result;
	size_t	i;

	i = -1;
	result = malloc((ft_strlen(src)+ 1) * sizeof(char));
	if (result == 0)
		return (0);
	while (src[++i] != '\0')
		result[i] = src[i];
	result[i] = '\0';
	return (result);
}
size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen((char *)src);
	i = 0;
	if (len != '\0')
	{
		while (src[i] && i < len - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srcsize);
}
int			ft_getstart(const char *s1, const char *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

int			ft_getend(const char *s1, const char *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[len - i - 1]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*newstr;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = ft_getstart(s1, set);
	end = ft_getend(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	newstr = (char *)malloc(sizeof(char) * (end - start + 1));
	if (newstr == NULL)
		return (NULL);
	ft_strlcpy(newstr, s1 + start, end - start + 1);
	return (newstr);
}
int main(void)
{
	printf("\nbaştan ve sondan ikinci gönderilen dizideki karakterleri arar.başta  buldursa son karaltere kadar siler sonda bulursa bulduğu ilk karakterden itibaren siler");
	printf("\n%s\n", ft_strtrim("atabacq", "a"));
	printf("%s\n", ft_strtrim("xavocadoxyz", "xyz"));
}
