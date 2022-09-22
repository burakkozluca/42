/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:17:44 by bkozluca          #+#    #+#             */
/*   Updated: 2022/09/22 17:26:49 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **a)
{
	int	min;

	min = ft_lstmin(*a);
	printf("Burdasın -->|%d\n", __LINE__);
	if ((*a)->next->content == ft_lstmax(*a) && (*a)->content != min)
		rra(a);
	else if ((*a)->next->content == ft_lstmax(*a) && (*a)->content == min)
	{
		sa(*a);
		ra(a);
	}
	else if ((*a)->next->content == min && (*a)->content == ft_lstmax(*a))
		ra(a);
	else if ((*a)->content == ft_lstmax(*a) && (*a)->next->content != min)
	{
		sa(*a);
		rra(a);
	}
	else
		sa(*a);
}
