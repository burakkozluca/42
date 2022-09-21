/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:51:01 by bkozluca          #+#    #+#             */
/*   Updated: 2022/09/21 17:10:19 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_stack *lst)
{
	t_stack	*temp;
	int		i;

	temp = lst;
	i = 0;
	while (temp != NULL)
	{
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

void	printlist(struct s_list *a)
{
	t_stack	*temp;

	temp = a;
	while (temp != NULL)
	{
		printf("%d ", temp->content);
		temp = temp->next;
	}
	temp = NULL;
}
