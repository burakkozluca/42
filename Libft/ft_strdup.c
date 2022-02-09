/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:36:30 by bkozluca          #+#    #+#             */
/*   Updated: 2022/02/09 17:47:07 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*result;
	size_t	i;

	i = -1;
	result = malloc(sizeof(*src)); //src parametresinin boyutu kadar boyutluk yer aç bellekte
	if (result == 0)
		return (0);
	while (src[++i] != '\0')
		result[i] = src[i];
	result[i] = '\0';
	return (result);
}
