/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:17:25 by bkozluca          #+#    #+#             */
/*   Updated: 2022/03/09 17:43:45 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*gec;

	if (!lst || !new)
		return ;
	gec = *lst;
	if (gec == NULL)
		*lst = new;
	else
	{
		gec = ft_lstlast(*lst);
		gec->next = new;
	}
}
