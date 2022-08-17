/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:10:05 by bkozluca          #+#    #+#             */
/*   Updated: 2022/08/17 18:16:24 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(b_stack **b)
{
	b_stack	*tmp;
	b_stack	*last;

	last = ft_lstlast(*b);
	tmp = *b;
	*b = (*b)->next;
	last->next = tmp;
	tmp->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(a_stack **a, b_stack **b)
{
	b_stack	*b_tmp;
	a_stack	*a_tmp;
	b_stack	*b_last;
	a_stack	*a_last;

	b_last = ft_lstlast(*b);
	b_tmp = *b;
	*b = (*b)->next;
	b_last->next = b_tmp;
	b_tmp->next = NULL;
	a_last = ft_lstlast(*a);
	a_tmp = *a;
	*a = (*a)->next;
	a_last->next = a_tmp;
	a_tmp->next = NULL;
	write(1, "rr\n", 3);
}
