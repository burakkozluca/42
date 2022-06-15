/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:49:13 by bkozluca          #+#    #+#             */
/*   Updated: 2022/06/15 16:57:47 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char s2)
{
	char	*ptr_str;
	int		i;
	int		j;

	if (!s1)
		return (0);
	if (!s2)
		return (0);
	ptr_str = (char *)malloc(ft_strlen(s1) + 2);
	if (!ptr_str)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr_str[i] = s1[i];
		i++;
	}
	j = 0;

	ptr_str[i++] = s2;
	ptr_str[i] = '\0';
	return (ptr_str);
}

char *get_next_line(int fd)
{
	int		i;
	char	*dizi;
	char	c;

	dizi = (char *)malloc(ft_strlen(dizi));
	i = 1;
	while (i)
	{
		i += read(fd, &c, 1);
		dizi = ft_strjoin(dizi, c);
		if (c == '\n' || c == '\0')
			break ;
	}
	return (dizi);
}

int main()
{
	int fd;

	fd = open("oku.txt", 0);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));

	//get_next_line(fd);
}
