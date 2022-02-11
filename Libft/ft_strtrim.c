/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 12:39:19 by bkozluca          #+#    #+#             */
/*   Updated: 2022/02/11 18:20:11 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str1;
	size_t	c;
	size_t	i;
	size_t	k;

	k = 0;
	c = 0;
	i = ft_strlen(s1);
	while (s1[i] != '\0' || s1[i] != ' ')
	{
		str1[k] = s1[i];
	}
	str1[k] = '\0';
	return (str1);
}
