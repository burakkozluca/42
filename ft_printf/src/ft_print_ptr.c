/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:25:19 by bkozluca          #+#    #+#             */
/*   Updated: 2022/06/06 16:46:55 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_print.h"

int	ft_ptr_len(unsigned long num)
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

void	ft_put_ptr(unsigned long num)
{
	if (num >= 16)
	{
		ft_put_nbr(num / 16);
		ft_put_nbr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_is_c(num + '0');
		else
			ft_is_c(num - 10 + 'a');
	}
}

int	ft_is_p(unsigned long ptr)
{
	int	len;

	len = 0;
	len += ft_is_s("0x");
	if (ptr == 0)
		len += ft_is_c('0');
	else
	{
		ft_put_nbr(ptr);
		len += ft_ptr_len(ptr);
	}
	return (len);
}
