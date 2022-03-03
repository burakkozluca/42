/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:36:30 by bkozluca          #+#    #+#             */
/*   Updated: 2022/03/03 17:43:32 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*result;
	size_t	i;

	i = -1;
	result = malloc((ft_strlen(src)+ 1) * sizeof(char));
	if (result == 0)
		return (0);
	while (src[++i] != '\0')
		result[i] = src[i];
	result[i] = '\0';
	return (result);
}

int	main(void)
{
	printf("***  ft_strdup  ***\nGönderilen karakterin benzerini oluşturu\ndizinin koyasını bellekte başka bi bölgeye kopyalar ve dönderir");
	printf("\n%s\n", ft_strdup("Hello world!"));
}
