/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:58:13 by bkozluca          #+#    #+#             */
/*   Updated: 2022/02/16 12:08:19 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	int	c;

	p = malloc(len + 1);
	if (p == NULL)
		return (0);
	for	(c = 0; c < len; c++)
	{
		*(p + c) = *(s + start - 1);
		s++;
	}
	*(p + c) = '\0';
	return (p);
}
