/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:15:41 by bkozluca          #+#    #+#             */
/*   Updated: 2022/02/27 17:59:34 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(char *str);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strlcpy(char *dest, const char *src, size_t len);
char	*ft_strlcat(char *restrict dst, const char *restrict src, size_t maxlen);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *str1, const char *str2, size_t n);

char	*ft_strchr(const char *s, int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
int	ft_atoi( const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
