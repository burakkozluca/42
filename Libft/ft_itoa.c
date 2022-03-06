/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:23:13 by bkozluca          #+#    #+#             */
/*   Updated: 2022/03/06 18:40:28 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_digit(int n)//basamak sayısı bulma
{
	size_t	count;

	count = 0;
	if (n == 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char *ft_itoa(int n)
{
	char		*nstr;
	size_t		dgt;
	long int	nb;

	nb = n;
	dgt = ft_get_digit(n);
	if (n < 0)
	{
		nb *= -1;
		dgt++;
	}
	nstr = (char *)malloc(sizeof(char) * (dgt + 1));
	if (!nstr)
		return (NULL);
	nstr[dgt] = '\0';
	while (dgt--)
	{
		nstr[dgt] = nb % 10 + '0';
		nb /= 10;
	}
	if (n < 0)
		nstr[0] = '-';
	return (nstr);
}
