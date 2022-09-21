/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:36:47 by bkozluca          #+#    #+#             */
/*   Updated: 2022/09/21 17:17:02 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_uniq(t_stack *stack)
{
	int		data;
	t_stack	*temp;

	temp = stack;
	data = temp->content;
	while (stack && temp->next != NULL)
	{
		if (stack->next != NULL && data == stack->next->content)
			return (0);
		else if (stack->next == NULL)
		{
			temp = temp->next;
			data = temp->content;
			stack = temp;
		}
		else
			stack = stack->next;
	}
	return (1);
}

int	is_sorted(t_stack *stack)
{
	while (stack->next != NULL)
	{
		if (stack->content < stack->next->content)
			stack = stack->next;
		else
			return (0);
	}
	return (1);
}
