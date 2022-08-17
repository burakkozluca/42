/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:24:57 by bkozluca          #+#    #+#             */
/*   Updated: 2022/08/17 18:16:52 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*b = *a;
	*b = temp;
}

void	sa(a_stack *a)
{
	swap(&a->content, &a->next->content);
	write(1, "sa\n", 3);
}

void	sb(b_stack *b)
{
	swap(&b->content, &b->next->content);
	write(1, "sb\n", 3);
}

void	ss(a_stack *a, b_stack *b)
{
	sa(a);
	sb(b);
	write(1, "ss\n", 3);
}

void	ra(a_stack **a)
{
	a_stack	*tmp;
	a_stack	*last;

	last = ft_lstlast(*a);
	tmp = *a;
	*a = (*a)->next;
	last->next = tmp;
	tmp->next = NULL;
	write(1, "ra\n", 3);
}
