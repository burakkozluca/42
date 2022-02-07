/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:36:30 by bkozluca          #+#    #+#             */
/*   Updated: 2022/02/07 17:40:59 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strdup(char *src)
{
	char *result;
	int	i;

	i = -1;
	result = malloc(sizeof(*src)); //src parametresinin boyutu kadar boyutluk yer aç bellekte
	if(result == 0)
		return (0);
	while(src[++i] != '\0')
		result[i] = src[i];
	result[i] = '\0';
	return(result);
}
