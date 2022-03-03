/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:39:23 by bkozluca          #+#    #+#             */
/*   Updated: 2022/03/03 17:43:34 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*buf;

	buf = (void *)malloc(count * size);
	if (buf == NULL)
		return (NULL);
	ft_bzero(buf, count * size);
	return (buf);
}
int main(void)
{
	printf("***  ft_calloc  ***\ncount değeri kadar bellekte yer ayrılır.\n");
	int *ip, id;
	ip = (int *) ft_calloc(5, sizeof(int));
	for (id=0; id<5; id++) {
		*(ip+id) = (id+1) * 10;
		printf("\n%p adresindeki değer: %d\n", (ip+id), *(ip+id));
	}
	free(ip);
}
