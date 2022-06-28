/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:49:13 by bkozluca          #+#    #+#             */
/*   Updated: 2022/06/28 15:58:13 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
//Tüm dosyayı oku sonra her satırı diziye at

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

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ptr_str;
	int		i;
	int		j;

	if (!s1)
	{
		s1 = malloc(1);
		s1[0] = '\0';
	}
	if (!s2)
		return (0);
	ptr_str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!ptr_str)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		ptr_str[i++] = s2[j++];
	}
	ptr_str[i] = '\0';
	// printf("%s\n", ptr_str);
	return (ptr_str);
}

char *ft_read(int fd,char *str)
{
	int 		i;
	char 		*ret;

	i = 1;
	ret = (char *)malloc(BUFFERSIZE + 1);
	if(!ret)
		return(0);
	while (i && !ft_strchr(str, '\n'))
	{
		i = read(fd, ret, BUFFERSIZE); //buffersize kadarlık yeri oku ret'e at ve uzunluğu i'de tut
		ret[i] = '\0';
		if (i <= 0)
		{
			free(ret);
			return (NULL);
		}
		str = ft_strjoin(str,ret);
	}
	free(ret);
	return(str);
}

char *ft_one_line(char *str)
{
	int		i;
	char 	*one_line;
	//satır uzunluğu bul
	i = 0;
	if(!str[i])
		return(NULL);
	while (str[i] != '\n' && str[i])
	{
		i++;
	}
	one_line = (char *)malloc(sizeof(char) * (i + 2));

	if (!one_line)
		return (NULL);
	//oneline'a satir line ekle
	i = 0;
	while (str[i] != '\n' && str[i])
	{
		one_line[i] = str[i];
		i++;
	}
	if(str[i] == '\n')
	{
		one_line[i] = str[i];
		i++;
	}
	one_line[i] = '\0';
	return(one_line);
}

char *ft_remain(char *str)
{
	int 			i;
	char 	*remain_char;
	int				j;

	i = 0;
	while (str[i] != '\n' && str[i])
		i++;
	if(!str[i])
	{
		free(str);
		return(NULL);
	}
	remain_char = (char *)malloc(sizeof(char) * (ft_strlen(str) - i));
	// if(!remain_char)
	// 	return(NULL);
	//i++;
	j = 0;
	while (str[i])
	{
		remain_char[j++] = str[i++];
	}
	remain_char[j] = '\0';
	free(str);
	return(remain_char);
}

char *get_next_line(int fd)
{
	static char	*str;
	char 	*one_line;

	str = ft_read(fd,str);
	if(!str)
		return (NULL);
	one_line = ft_one_line(str);
	str = ft_remain(str);

	return (one_line);
}

int main()
{
	int fd;

	fd = open("oku.txt", 0);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
}
