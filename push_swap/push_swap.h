/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:19:24 by bkozluca          #+#    #+#             */
/*   Updated: 2022/08/27 17:07:43 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
	int				rank;
} a_stack,	b_stack,	t_stack;


//UTILS
t_stack	*ft_lstlast(t_stack *lst);
void	lstlastprev(t_stack **stack);

void	push(t_stack **stack, int data);
t_stack	*to_int(char **str, int ac);
#endif
