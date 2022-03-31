/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:47:38 by bkozluca          #+#    #+#             */
/*   Updated: 2022/03/31 13:24:46 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*gec;
	t_list	*dugum;

	if (!lst || !f)
		return (NULL);
	gec = 0;
	while (lst)
	{
		dugum = ft_lstnew(f(lst->content));
		if (!dugum)
		{
			ft_lstclear(&gec, del);
			return (0);
		}
		ft_lstadd_back(&gec, dugum);
		lst = lst->next;
	}
	return (gec);
}
