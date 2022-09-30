/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:19:28 by bkozluca          #+#    #+#             */
/*   Updated: 2022/09/30 19:17:56 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_remove_list(a_stack **a_stac)
{
	a_stack	*tmp;

	tmp = *a_stac;
	while ((*a_stac))
	{
		*a_stac = (*a_stac)-> next;
		free(tmp);
		tmp = *a_stac;
	}
}

void	push_swap(char **str, int len)
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
	else
		sort_big(&a_stack);
	free(b_stack);
	ft_remove_list(&a_stack);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		push_swap(argv, argc);
	return (0);
}
