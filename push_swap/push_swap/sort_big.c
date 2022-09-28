/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:24:36 by bkozluca          #+#    #+#             */
/*   Updated: 2022/09/22 16:17:24 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big(a_stack **a_stack)
{
	b_stack	*b_stack;
	int		i;

	b_stack = NULL;
	if (is_sorted(*a_stack))
		return ;
	i = 1;
	while (!is_sorted(*a_stack))
	{
		push_b_stack(a_stack, &b_stack);
		if (i > 0 && ft_lstsize(b_stack) > 5 && !is_sorted(*a_stack))
		{
			push_a_stack(a_stack, &b_stack);
			i--;
		}
	}
	if (b_stack)
		give_back(a_stack, &b_stack);
	free(b_stack);
}

void	push_b_stack(a_stack **a_stack, b_stack **b_stack)
{
	int	ort;
	int	size;
	int	index;

	ort = pivot(*a_stack);
	while (ft_lstmin(*a_stack) != ort)
	{
		size = ft_lstsize(*a_stack);
		index = find_index(*a_stack, ort);
		if (index <= size / 2 && index != 0)
			ra(a_stack);
		else if (index >= size / 2 && index != 0)
			rra(a_stack);
		else
			pb(b_stack, a_stack);
		if (ft_lstmin(*a_stack) == ort && !is_sorted(*a_stack) && size <= 5)
			sort_five(a_stack, b_stack);
	}
}

void	push_a_stack(a_stack **a_stack, b_stack **b_stack)
{
	int	ort;
	int	size;
	int	index;

	ort = pivot(*b_stack);
	while (ft_lstmin(*b_stack) != ort && !is_revsorted(*b_stack))
	{
		size = ft_lstsize(*b_stack);
		index = find_index(*b_stack, ort);
		if (index <= size / 2 && index != 0)
			rb(b_stack);
		else if (index >= size / 2 && index != 0)
			rrb(b_stack);
		else
			pa(a_stack, b_stack);
	}
}

void	give_back(a_stack **a_stack, b_stack **b_stack)
{
	int	size;
	int	index;

	while (*b_stack != NULL)
	{
		size = ft_lstsize(*b_stack);
		index = ft_lstmax_pos(*b_stack);
		if (index == 1)
			sb(*b_stack);
		else if (index <= size / 2 && index != 0)
			rb(b_stack);
		else if (index >= size / 2 && index != 0)
			rrb(b_stack);
		else
			pa(a_stack, b_stack);
	}
}
