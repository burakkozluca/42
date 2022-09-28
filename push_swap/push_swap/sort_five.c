/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:46:43 by bkozluca          #+#    #+#             */
/*   Updated: 2022/09/28 15:47:30 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb_five(t_stack **a_stack, t_stack **b_stack)
{
	int	index;

	index = 0;
	while (3 < ft_lstsize(*a_stack))
	{
		index = ft_lstmin_pos(*a_stack);
		if (index != 0 && index < ft_lstsize(*a_stack) / 2)
			ra(a_stack);
		else if (index >= ft_lstsize(*a_stack) / 2)
			rra(a_stack);
		else if (!index)
			pb(b_stack, a_stack);
	}
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	lstsize;

	lstsize = ft_lstsize(*a);
	pb_five(a, b);
	sort_three(a);
	if (lstsize == 4)
		pa(a, b);
	if (lstsize == 5)
	{
		pa(a, b);
		pa(a, b);
	}
}
