/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:17:44 by bkozluca          #+#    #+#             */
/*   Updated: 2022/09/20 17:10:28 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **a)
{
	int	min;
	int	i;

	min = ft_lstmin(*a);
	i = ft_lstsize(*a);
	while (i > 1)
	{
		if ((*a)->next->content == ft_lstmax(*a) && (*a)->content != min)
			rra(&a);
		if ((*a)->next->content == ft_lstmax(*a) && (*a)->content == min)
		{
			sa(&a);
			ra(&a);
		}
		if ((*a)->next->content == min && (*a)->content == ft_lstmax(*a))
			ra(&a);
		if ((*a)->content == ft_lstmax(*a) && (*a)->next->content != min)
		{
			sa(&a);
			rra(&a);
		}
		if ((*a)->next->content == min && (*a)->content != ft_lstmax(*a))
			sa(&a);
		i--;
	}
}
