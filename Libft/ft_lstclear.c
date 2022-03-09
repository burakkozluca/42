/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:27:04 by bkozluca          #+#    #+#             */
/*   Updated: 2022/03/09 17:43:31 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*gec;
	t_list	*tmp;

	if (!del || !lst)
		return ;
	gec = *lst;
	while (gec != NULL)
	{
		tmp = gec->next;
		ft_lstdelone(gec, del);
		gec = tmp;
	}
	*lst = NULL;
}
