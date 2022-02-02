/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:08:40 by bkozluca          #+#    #+#             */
/*   Updated: 2022/02/02 12:41:33 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char *ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	const size_t srclen = strlen(src);
	const size_t dstlen = strnlen(dst,dstsize);
	if(dstlen == dstsize)
		return(dstsize+srclen);
	if(srclen < dstsize - dstlen)
	{
		memcpy(dst+dstlen, src, srclen + 1);
	}
	else
	{
		memcpy(dst + dstlen, src, dstsize - 1);
		dst[dstlen + dstsize - 1] = "\0";
	}
	return (dstlen + srclen);
}
