/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:10:38 by bkozluca          #+#    #+#             */
/*   Updated: 2022/06/29 13:06:31 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ptr_str;
	int		i;
	int		j;

	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char));
		s1[0] = '\0';
	}
	if (!s2)
		return (0);
	ptr_str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!ptr_str)
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		ptr_str[i] = s1[i];
	j = 0;
	while (s2[j] != '\0')
		ptr_str[i++] = s2[j++];
	ptr_str[i] = '\0';
	free(s1);
	return (ptr_str);
}
