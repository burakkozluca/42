/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:40:49 by bkozluca          #+#    #+#             */
/*   Updated: 2022/08/27 16:10:18 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(b_stack **b)
{
	b_stack	*last;

	last = ft_lstlast(*b);
	lstlastprev(b);
	last->next = (*b);
	(*b) = last;
	write(1, "rrb\n", 4);
}

void	rrr(a_stack **a, b_stack **b)
{
	a_stack	*a_last;
	b_stack	*b_last;

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

void	pa(a_stack **a, b_stack **b)
{
	b_stack	*temp;

	temp = (*b)->next;
	(*b)->next = (*a);
	*a = *b;
	*b = temp;
	write(1, "pa\n", 3);
}

void	pb(b_stack **b, a_stack **a)
{
	a_stack	*temp;

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
		return (0);
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
