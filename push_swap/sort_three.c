/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:17:44 by bkozluca          #+#    #+#             */
/*   Updated: 2022/09/19 17:15:13 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_three(t_stack **a)
{
	int	max;
	int	min;
	int	i;
	int	j;

	max = ft_lstmax(*a);
	min = ft_lstmin(*a);
	i = ft_lstsize(*a);
	while (i > 1)
	{
		if ((*a)->next->content == max && (*a)->content != min)
			rra(&a);
		if ((*a)->next->content == max && (*a)->content == min)
		{
			sa(&a);
			ra(&a);
		}
		if ((*a)->next->content == min && (*a)->content == max)
			ra(&a);
		if ((*a)->content == max && (*a)->next->content != min)
		{
			sa(&a);
			rra(&a);
		}
		if ((*a)->next->content == min && (*a)->content != max)
			sa(&a);
	}
}
