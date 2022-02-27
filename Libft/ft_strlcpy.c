/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:54:23 by bkozluca          #+#    #+#             */
/*   Updated: 2022/02/27 13:37:42 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcpy(char *dest, const char *src, size_t len)
{
    const size_t  srclen = strlen(src);

    if (srclen + 1 < len) //srclen dest'in uzunluğundan küçükse memcpy ile kopyaladık.
    {
        ft_memcpy(dest, src, srclen + 1); // +1 silip deneme yap!
    }
    else //srclen dest'in uzunluğundan büyükse memcpy ile kopyaladıktan sonra dizinin sonunda boş karakter ekliyoruz
    {
        ft_memcpy(dest, src, len - 1);
        dest[len - 1] = '\0';
    }
    return (dest);
}
