/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:08:40 by bkozluca          #+#    #+#             */
/*   Updated: 2022/02/09 17:47:08 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strlcat(char *restrict dst, const char *restrict src, size_t maxlen)
{
	const size_t	srclen = strlen(src);
	const size_t	dstlen = strnlen(dst, maxlen);

	if (dstlen == maxlen)
		return (maxlen + srclen);
	if (srclen < maxlen - dstlen)
	{
		memcpy(dst + dstlen, src, srclen + 1);
	}
	else
	{
		memcpy(dst + dstlen, src, maxlen - 1);
		dst[dstlen + maxlen - 1] = "\0";
	}
	return (dstlen + srclen);
}
