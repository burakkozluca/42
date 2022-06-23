/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:49:13 by bkozluca          #+#    #+#             */
/*   Updated: 2022/06/23 15:48:09 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s);
		i++;
	}
	return (0);
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
	char 	*one_line;
	int		i;

	//satır uzunluğu bul
	i = 0;
	while (str[i] != '\n' && !str[i])
	{
		i++;
	}
	one_line = (char *)malloc(sizeof(char)*(i + 2));

	if (!one_line)
		return (0);
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
	str[i] = '\0';
	return(one_line);
}

// char *ft_remain(char *str)
// {
// 	int i;
// 	char *remain_char;

// 	i = 0;
// 	while (str[i] != '\n' && !str[i])
// 	{

// 	}

// }

char *get_next_line(int fd)
{
	static char	*str;
	char 	*one_line;

	str = ft_read(fd,str);
	one_line = ft_one_line(str);


	// int		i;
	// //static char ı ret sonrası \n den sonra tutacak şekilde güncelleyen fonksiyon. yeni değer \n den sonrası
	// static char	*dizi;// static her çalıştığında yeni linedan başlayarak tutan pointer,
	// char		*ret;// tüm bilgileri tutan dizi içerisinden line '\n' a kadar dönen arrayi eşitleyip kullanıcıya döndür
	// char	c;
	// int 	buffer_size = 2;
	// char 	*s;

	//dizi = (char *)malloc(ft_strlen(dizi));
	// s = (char *)malloc(buffer_size + 1);
	// i = 1;
	// while (i)
	// {
	// 	if (buffer_size != 1)
	// 	{
	// 		i = read(fd, s, buffer_size);
	// 		//printf("%s",s);
	// 		dizi = ft_strjoin1(dizi, s);
	// 		free(s);
	// 		i--;
	// 		if (s[i] == '\n' || s[i] == '\0')
	// 			break ;
	// 	}
	// 	else
	// 	{
	// 		i += read(fd, &c, 1); //karakter karakter okuyor
	// 		// printf("%c",c);
	// 		dizi = ft_strjoin(dizi, c); //diziye karakterleri sırayla ekliyor
	// 		// printf("%s",dizi);
	// 		if (c == '\n' || c == '\0')
	// 			break ;
	// 	}
	// }
	return (str);
}

int main()
{
	int fd;

	fd = open("oku.txt", 0);
	printf("%s", get_next_line(fd));
	//printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));

	// int	read;
	// char *ret;

	//get_next_line(fd);
}
