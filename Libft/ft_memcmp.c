/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:57:10 by bkozluca          #+#    #+#             */
/*   Updated: 2022/02/09 17:47:30 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	*ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const void	*s1;
	const void	*s2;

	char void	*p1 = s1;
	char void	*p2 = s2;

	while (n-- != 0)
	{
		if (*p1++ != *p2++)
			return ((*p1--) - (*p2--));
	}
	return (0);
}
