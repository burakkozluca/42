/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:51:01 by bkozluca          #+#    #+#             */
/*   Updated: 2022/09/22 17:24:58 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_stack *lst)
{
	t_stack	*temp;
	int		i;

	temp = lst;
	i = 0;
	while (temp->next != NULL)
	{
		//printf("Burdasın -->|%d\n", __LINE__);
		i++;
		temp = temp->next;
	}
	return (i);
}

int	ft_lstmin(t_stack *a)
{
	int	min;

	min = a->content;
	while (a)
	{
		if (a->content < min)
			min = a->content;
		a = a->next;
	}
	return (min);
}

int	ft_lstmin_pos(t_stack *a)
{
	int		i;
	int		data;
	t_stack	*temp;

	temp = a;
	data = temp->content;
	i = 0;
	while (a != NULL)
	{
		if (data <= a->content && a != NULL)
			a = a->next;
		else
		{
			temp = temp->next;
			data = temp->content;
			i++;
		}
	}
	return (i);
}

int	ft_lstmax(t_stack *a)
{
	int	max;

	max = a->content;
	while (a)
	{
		if (a->content > max)
			max = a->content;
		a = a->next;
	}
	return (max);
}

int	ft_lstmax_pos(t_stack *stack)
{
	int		i;
	int		data;
	t_stack	*temp;

	temp = stack;
	data = temp->content;
	i = 0;
	while (stack != NULL)
	{
		if (data >= stack->content && stack != NULL)
			stack = stack->next;
		else
		{
			temp = temp->next;
			data = temp->content;
			i++;
		}
	}
	return (i);
}
