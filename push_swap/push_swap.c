/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:19:28 by bkozluca          #+#    #+#             */
/*   Updated: 2022/09/20 17:10:06 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a_stack;
	t_stack	*b_stack;

	if (argc > 1)
	{
		a_stack = (t_stack *)malloc(sizeof(t_stack));
		b_stack = (t_stack *)malloc(sizeof(t_stack));
		if (ft_lstsize(a_stack) <= 3)
			sort_three(&a_stack);
		else if (ft_lstsize(a_stack) <= 5)
			sort_five(&a_stack, &b_stack);
	}
	return (0);
}
