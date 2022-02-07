/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:25:19 by bkozluca          #+#    #+#             */
/*   Updated: 2022/02/07 17:40:48 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char *strnstr(const char *haystack, const char *needle, size_t len)
{
	char c, sc;
	size_t slen;

	if ((c = *needle++) != '\0') {
		slen = strlen(needle);
		do {
			do {
				if (slen-- < 1 || (sc = *haystack++) == '\0')
					return (NULL);
			} while (sc != c);
			if (slen > len)
				return (NULL);
		} while (strncmp(haystack, needle, slen) != 0); //normal while yapılabilir okunurluğu artar.
		haystack--;
	}
	return ((char *)haystack);
}
