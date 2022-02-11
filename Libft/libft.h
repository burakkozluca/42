/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:15:41 by bkozluca          #+#    #+#             */
/*   Updated: 2022/02/11 18:20:17 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <unistd.h>

int	ft_isalpha(int a);
int	ft_isdigit(int a);
int	isalnum(int a);
int	ft_isascii(int a);
int	ft_isprint(int a);
int	ft_strlen(char *str);
void	ft_memset(void *dest, int c, unsigned int n);
void ft_bzero(void *s, unsigned int n);
void	ft_memcpy(void *dest, const void *src, unsigned int n);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strlcpy(char *dest, const char *src, size_t len);
char	*ft_strlcat(char *restrict dst, const char *restrict src, size_t maxlen);

char	*strchr(const char *s, int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif
