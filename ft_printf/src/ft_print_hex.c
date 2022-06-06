/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:25:16 by bkozluca          #+#    #+#             */
/*   Updated: 2022/06/06 14:41:57 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_hex_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_put_hex (num / 16, format);
		ft_put_hex (num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_is_c(num + '0');
		else
		{
			if (format == 'x')
				ft_is_c(num - 10 + 'a');
			if (format == 'X')
				ft_is_c(num - 10 + 'A');
		}
	}
}

int	ft_is_x(unsigned int num, const char format)
{
	if (num == 0)
		return (ft_is_c('0'));
	else
		ft_put_hex(num, format);
	return (ft_hex_len(num));
}
