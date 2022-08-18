/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:43:43 by bkozluca          #+#    #+#             */
/*   Updated: 2022/08/18 10:55:03 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return ;
	while (lst->next != 0)
		lst = lst->next;
	return (lst);
}

void	lstlastprev(t_stack **stack)
{
	t_stack	*gec;

	gec = (*stack);
	while (gec->next->next != NULL)
		gec = gec->next;
	gec->next = NULL;
}
