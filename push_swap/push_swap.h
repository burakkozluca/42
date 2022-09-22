/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:19:24 by bkozluca          #+#    #+#             */
/*   Updated: 2022/09/22 16:26:47 by bkozluca         ###   ########.fr       */
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
} a_stack, b_stack,	t_stack;

//UTILS
t_stack	*ft_lstlast(t_stack *lst);
void	lstlastprev(t_stack **stack);
int		ft_lstsize(t_stack *lst);
int		ft_lstmin(t_stack *a);
int		ft_lstmax(t_stack *a);
int		ft_lstmin_pos(t_stack *a);
t_stack	*to_int(char **str, int ac);
int		where(t_stack *stack, int data);
int		pivot(t_stack *stack);
int		find_index(t_stack *stack, int data);
int		ft_lstmax_pos(t_stack *a);
void	printlist(struct s_list *a);

//SORT_BIG
void	sort_big(a_stack **a_stack);
void	push_b_stack(a_stack **a_stack, b_stack **b_stack);
void	push_a_stack(a_stack **a_stack, b_stack **b_stack);
void	give_back(a_stack **a_stack, b_stack **b_stack);
//SORT_THREE
void	sort_three(t_stack **a);
//SORT_FIVE
void	pb_five(t_stack **a_stack, t_stack **b_stack);
void	sort_five(t_stack **a, t_stack **b);

t_stack	*push_swap(char **str, int len);
//CHECK
int		is_uniq(t_stack *stack);
int		is_sorted(t_stack *stack);
int		is_revsorted(t_stack *stack);
int		is_number(char **str, int argc);
//RULES
void	swap(int *a, int *b);
void	push(t_stack **stack, int data);
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
