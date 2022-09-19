/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:10:05 by bkozluca          #+#    #+#             */
/*   Updated: 2022/09/19 17:15:25 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*last;

	last = ft_lstlast(*b);
	tmp = *b;
	*b = (*b)->next;
	last->next = tmp;
	tmp->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	t_stack	*b_tmp;
	t_stack	*a_tmp;
	t_stack	*b_last;
	t_stack	*a_last;

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

void	rra(t_stack **a)
{
	t_stack	*last;

	last = ft_lstlast(*a);
	lstlastprev(a);
	last->next = *a;
	*a = last;
	(*a)->next = NULL;
	write(1, "rra\n", 4);
}
