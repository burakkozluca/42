/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:49:13 by bkozluca          #+#    #+#             */
/*   Updated: 2022/07/06 10:35:41 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_read(int fd, char *str)
{
	int			i;
	char		*ret;

	i = 1;
	ret = (char *)malloc(BUFFERSIZE + 1);
	if (!ret)
		return (0);
	while (i && !ft_strchr(str, '\n'))
	{
		i = read(fd, ret, BUFFERSIZE);
		ret[i] = '\0';
		if (i == -1)
		{
			free(ret);
			return (NULL);
		}
		str = ft_strjoin(str, ret);
	}
	free(ret);
	return (str);
}

static char	*ft_one_line(char *str)
{
	int		i;
	char	*one_line;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] != '\n' && str[i])
		i++;
	one_line = (char *)malloc(sizeof(char) * (i + 2));
	if (!one_line)
		return (NULL);
	i = 0;
	while (str[i] != '\n' && str[i])
	{
		one_line[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		one_line[i] = str[i];
		i++;
	}
	one_line[i] = '\0';
	return (one_line);
}

static char	*ft_remain(char *str)
{
	int		i;
	char	*remain_char;
	int		j;

	i = 0;
	while (str[i] != '\n' && str[i])
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	remain_char = (char *)malloc(sizeof(char) * (ft_strlen(str) - i));
	if (!remain_char)
		return (NULL);
	i++;
	j = 0;
	while (str[i])
	{
		remain_char[j++] = str[i++];
	}
	remain_char[j] = '\0';
	free(str);
	return (remain_char);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*one_line;

	str = ft_read(fd, str);
	if (!str)
	{
		free(str);
		return (NULL);
	}
	one_line = ft_one_line(str);
	str = ft_remain(str);
	return (one_line);
}
