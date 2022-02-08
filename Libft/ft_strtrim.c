/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 12:39:19 by bkozluca          #+#    #+#             */
/*   Updated: 2022/02/08 13:13:44 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *str1;
	int c, i, k;

	k = 0;
	c = 0;
	while(s1[c] == ' ')
		c++;
	i = c;
	while(s1[i] != '\0' || s1[i] != ' ')
	{
		str1[k] = s1[i];
	}
	str1[k] = '\0';
	return (str1);
}
