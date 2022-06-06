/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:37:25 by bkozluca          #+#    #+#             */
/*   Updated: 2022/06/06 15:40:56 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_is_s(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_is_s("(null)");
		return (1);
	}
	while (str[i])
	{
		ft_is_c(str[i]);
		i++;
	}
	return (i);
}
