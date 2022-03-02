/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:08:40 by bkozluca          #+#    #+#             */
/*   Updated: 2022/03/02 12:55:12 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strlcat(char *dst, const char *src, size_t maxlen)
{
	const size_t	srclen = strlen(src);
	const size_t	dstlen = strnlen(dst, maxlen);

	if (dstlen == maxlen)
		return ((char *)maxlen + srclen);
	if (srclen < maxlen - dstlen)
	{
		ft_memcpy(dst + dstlen, src, srclen + 1);
	}
	else
	{
		ft_memcpy(dst + dstlen, src, maxlen - 1);
		dst[dstlen + maxlen - 1] = '\0';
	}
	return ((char *)dstlen + srclen);
}
