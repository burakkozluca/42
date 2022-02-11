/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:36:30 by bkozluca          #+#    #+#             */
/*   Updated: 2022/02/11 18:20:14 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*result;
	size_t	i;

	i = -1;
	result = malloc(sizeof(*src));
	if (result == 0)
		return (0);
	while (src[++i] != '\0')
		result[i] = src[i];
	result[i] = '\0';
	return (result);
}
