/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:10:41 by bkozluca          #+#    #+#             */
/*   Updated: 2022/03/09 17:43:34 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*gec;

	if (!lst)
		return (NULL);
	gec = lst;
	while (gec->next != NULL)
	{
		gec = gec->next;
	}
	return (gec);
}
