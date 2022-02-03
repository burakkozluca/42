/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:02:35 by bkozluca          #+#    #+#             */
/*   Updated: 2022/02/03 17:23:10 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int	*strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	u1;
	unsigned char	u2; //register unsigned char

	while (n-- > 0)
	{
		u1 = (unsigned char) *str1++;
		u2 = (unsigned char) *str2++;
		if (u1 != u2)
			return (u1 - u2);
		if (u1 == '\0')
			return (0);
	}
}
