/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:40:49 by bkozluca          #+#    #+#             */
/*   Updated: 2022/09/20 17:10:18 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stack **b)
{
	t_stack	*last;

	last = ft_lstlast(*b);
	lstlastprev(b);
	last->next = (*b);
	(*b) = last;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	t_stack	*a_last;
	t_stack	*b_last;

	a_last = ft_lstlast(*a);
	b_last = ft_lstlast(*b);
	lstlastprev(a);
	a_last->next = (*a);
	(*a) = a_last;
	lstlastprev(b);
	b_last->next = (*b);
	(*b) = b_last;
	write(1, "rrr\n", 4);
}

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	temp = (*b)->next;
	(*b)->next = (*a);
	*a = *b;
	*b = temp;
	write(1, "pa\n", 3);
}

void	pb(t_stack **b, t_stack **a)
{
	t_stack	*temp;

	temp = (*a)->next;
	(*a)->next = (*b);
	*b = *a;
	*a = temp;
	write(1, "pb\n", 3);
}

void	push(t_stack **stack, int data)
{
	t_stack	*tmp;

	tmp = (t_stack *)malloc(sizeof(t_stack));
	if (!tmp)
		return ;
	tmp->content = data;
	tmp->next = NULL;
	if (!stack)
	{
		(*stack) = tmp;
		return ;
	}
	tmp->next = (*stack);
	(*stack) = tmp;
}
