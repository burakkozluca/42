/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:40:24 by bkozluca          #+#    #+#             */
/*   Updated: 2022/09/22 16:16:35 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	geclst(t_stack **stack)
{
	t_stack	*gec;

	gec = (*stack);
	while (gec->next != NULL)
		gec = gec->next;
	gec->next = NULL;
}

int	where(t_stack *stack, int data)
{
	int	i;
	int	ret;
	int	num;

	num = ft_lstmax(stack);
	ret = 0;
	i = 0;
	while (stack)
	{
		if (data < stack->content && num >= stack->content)
		{
			num = stack->content;
			stack = stack->next;
			ret = i;
		}
		else
			stack = stack->next;
		i++;
	}
	return (ret);
}

int	pivot(t_stack *stack)
{
	t_stack	*temp;
	int		ret;

	temp = stack;
	ret = 0;
	while (temp)
	{
		ret += temp->content;
		temp = temp->next;
	}
	ret = ret / ft_lstsize(stack);
	while (where(stack, ret) != 0)
		stack = stack->next;
	return (stack->content);
}

int	find_index(t_stack *stack, int data)
{
	int	first;
	int	size;
	int	i;
	int	last;

	first = 0;
	size = ft_lstsize(stack);
	while (stack && data <= stack->content)
	{
		stack = stack->next;
		first++;
	}
	i = first;
	while (stack)
	{
		if (data > stack->content)
			last = i;
		stack = stack->next;
		i++;
	}
	if (first > (size - last))
		return (last);
	return (first);
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
