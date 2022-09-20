/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:19:24 by bkozluca          #+#    #+#             */
/*   Updated: 2022/09/20 17:10:29 by bkozluca         ###   ########.fr       */
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
}	t_stack;
//UTILS
t_stack	*ft_lstlast(t_stack *lst);
void	lstlastprev(t_stack **stack);
int		ft_lstsize(t_stack *lst);
int		ft_lstmin(t_stack *a);
int		ft_lstmax(t_stack *a);
int		ft_lstmin_pos(t_stack *a);
//SORT_THREE
void	sort_three(t_stack **a);
void	pb_five(t_stack **a_stack, t_stack **b_stack);
void	sort_five(t_stack **a, t_stack **b);

void	push(t_stack **stack, int data);

//RULES
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **b, t_stack **a);
#endif
