/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:27:33 by bkozluca          #+#    #+#             */
/*   Updated: 2022/03/09 17:43:44 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		retun (0);
	if (fd == -2147483648)
	{
		ft_putstr_fd(n, fd);
		ft_putchar_fd(fd);
	}
	else if (n < 0)
	{

	}
	else
	{

	}
}
