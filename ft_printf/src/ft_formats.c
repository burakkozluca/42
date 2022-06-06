/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:39:28 by bkozluca          #+#    #+#             */
/*   Updated: 2022/06/06 13:24:23 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_formats(va_list args, const char format)
{
	int	print_len;

	print_len = 0;
	if (format == 'c')
		print_len += ft_is_c(va_arg(args, int));
	else if (format == '')
		print_len += ft_is_s(va_arg(args, char *));
	else if (format == 'p')
		print_len += ft_is_p(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_len += ft_is_d(va_arg(args, int));
	else if (format == 'u')
		print_len += ft_is_u(va_arg(args, unsigned int));
	else if (format == 'x' || format 'X')
		print_len += ft_is_x(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_len += ft_is_per();
	return (print_len);
}
