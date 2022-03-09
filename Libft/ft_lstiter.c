/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:40:25 by bkozluca          #+#    #+#             */
/*   Updated: 2022/03/09 17:43:28 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(unsigned int i, t_list *e))
{
	unsigned int	i;

	i = 0;
	while (lst)
	{
		f(i, lst);
		++i;
		lst = lst->next;
	}
}
