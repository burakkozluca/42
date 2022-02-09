/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:55:24 by bkozluca          #+#    #+#             */
/*   Updated: 2022/02/09 17:47:36 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memcpy(void *dest, const void *src, unsigned int n)
{
	char	*ptr;
	char	*ptrsrc;

	ptrsrc = src;
	ptr = dest;
	while (n - 1 > 0)
	{
		*ptr++ = *ptrsrc++;
	}
	return (dest);
}
