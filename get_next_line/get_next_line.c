/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:49:13 by bkozluca          #+#    #+#             */
/*   Updated: 2022/06/22 14:30:19 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' || c == '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (0);
}
//Tüm dosyayı oku sonra her satırı diziye at
char *ft_read(int fd)
{
	static char* dizi;
	int i;
	char *ret;

	i = 1;
	while (i && !ft_strchr(ret, '\n'))
	{
		i = read(fd, dizi, BUFFERSIZE);
	}
	return(dizi);
}

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

char	*ft_strjoin1(char const *s1, char const *s2)
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
	while (s2[j] != '\0')
	{
		ptr_str[i++] = s2[j++];
	}
	ptr_str[i] = '\0';
	return (ptr_str);
}

char *get_next_line(int fd)
{
	int		i;
	//static char ı ret sonrası \n den sonra tutacak şekilde güncelleyen fonksiyon. yeni değer \n den sonrası
	static char	*dizi;// static her çalıştığında yeni linedan başlayarak tutan pointer,
	char		*ret;// tüm bilgileri tutan dizi içerisinden line '\n' a kadar dönen arrayi eşitleyip kullanıcıya döndür
	char	c;
	int 	buffer_size = 2;
	char 	*s;

	//dizi = (char *)malloc(ft_strlen(dizi));
	s = (char *)malloc(buffer_size + 1);
	i = 1;
	while (i)
	{
		if (buffer_size != 1)
		{
			i = read(fd, s, buffer_size);
			//printf("%s",s);
			dizi = ft_strjoin1(dizi, s);
			free(s);
			i--;
			if (s[i] == '\n' || s[i] == '\0')
				break ;
		}
		else
		{
			i += read(fd, &c, 1); //karakter karakter okuyor
			// printf("%c",c);
			dizi = ft_strjoin(dizi, c); //diziye karakterleri sırayla ekliyor
			// printf("%s",dizi);
			if (c == '\n' || c == '\0')
				break ;
		}
	}
	return (dizi);
}

int main()
{
	int fd;

	fd = open("oku.txt", 0);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));

	int	read;
	char *ret;

	//get_next_line(fd);
}
