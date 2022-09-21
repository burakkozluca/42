/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:19:28 by bkozluca          #+#    #+#             */
/*   Updated: 2022/09/21 17:19:13 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*push_swap(char **str, int len)
{
	a_stack	*a_stack;
	b_stack	*b_stack;

	b_stack = NULL;
	a_stack = to_int(str, len);
	if (!is_uniq(a_stack))
	{
		write(2, "Error\n", 6);
		free(a_stack);
		exit(EXIT_FAILURE);
	}
	if (ft_lstsize(a_stack) <= 3 && !is_sorted(a_stack))
		sort_three(&a_stack);
	else if (ft_lstsize(a_stack) <= 5 && !is_sorted(a_stack))
		sort_five(&a_stack, &b_stack);
	free(b_stack);
	return (a_stack);
}

int	main(int argc, char **argv)
{
	t_stack	*stack;

	if (argc > 1)
	{
		stack = (t_stack *)malloc(sizeof(t_stack));
		stack = push_swap(argv, argc);
		free(stack);
		exit(EXIT_SUCCESS);
	}
	return (0);
}
