/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:39:23 by bkozluca          #+#    #+#             */
/*   Updated: 2022/02/07 17:40:56 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void *ft_calloc(size_t count, size_t size)
{
	void *buf;

	if(!(buf = (void *) malloc(count * size))) //
		return (NULL);
	ft_bzero(buf, count * size);
	return (buf);
}
