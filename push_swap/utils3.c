/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:40:24 by bkozluca          #+#    #+#             */
/*   Updated: 2022/09/20 17:10:33 by bkozluca         ###   ########.fr       */
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
