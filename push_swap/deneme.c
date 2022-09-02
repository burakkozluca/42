/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakkozluca <burakkozluca@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:19:33 by bkozluca          #+#    #+#             */
/*   Updated: 2022/09/02 16:27:13 by burakkozluc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (0);
	while (lst->next != 0)
		lst = lst->next;
	return (lst);
}

void	lstlastprev(t_stack **stack)
{
	t_stack	*gec;

	gec = (*stack);
	while (gec->next->next != NULL)
		gec = gec->next;
	gec->next = NULL;
}

void	geclst(t_stack **stack)
{
	t_stack	*gec;

	gec = (*stack);
	while (gec->next != NULL)
		gec = gec->next;
	gec->next = NULL;
}

void	printlist(struct s_list *a)
{
	a_stack	*temp;

	temp = a;
	while (temp != NULL)
	{
		printf("%d ", temp->content);
		temp = temp->next;
	}
	temp = NULL;
}

void	rra(a_stack **a)
{
	a_stack	*last;

	last = ft_lstlast(*a);
	lstlastprev(a);
	last->next = (*a);
	(*a) = last;
	write(1, "rra\n", 4);
}

void	ra(a_stack **a)
{
	a_stack	*tmp;
	a_stack	*last;

	last = ft_lstlast(*a);
	tmp = *a;
	*a = (*a)->next;
	last->next = tmp;
	tmp->next = NULL;
	write(1, "ra\n", 3);
}

void	rrr(a_stack **a, b_stack **b)
{
	a_stack	*a_last;
	b_stack	*b_last;

	a_last = ft_lstlast(*a);
	b_last = ft_lstlast(*b);

	lstlastprev(a);
	a_last->next = (*a);
	(*a) = a_last;

	lstlastprev(b);
	b_last->next = (*b);
	(*b) = b_last;
	write(1, "rrr\n", 4);
}

void	rrb(b_stack **b)
{
	b_stack	*last;

	last = ft_lstlast(*b);
	lstlastprev(b);
	last->next = (*b);
	(*b) = last;
	write(1, "rrb\n", 4);
}

void	pa(a_stack **a, b_stack **b)
{
	a_stack *last;
	b_stack *first;

	last = ft_lstlast(*a);
	geclst(a);
	first = (*b)->content;

	write(1, "pa\n", 3);
	// last = ft_lstlast(*a); //son eleman lasta yazıldı.
	// lstlastprev(a); //son elemana null yazıldı.
	// last->next = (*a); //last'ın nextine stack a yazıldı.
	// last = ft_lstlast(*a);

}

int	main(int argc, char **argv)
{
	a_stack	*a;
	b_stack *b;

	a = (a_stack *)malloc(sizeof(struct s_list));
	a->content = 1;
	a->next = (a_stack *)malloc(sizeof(struct s_list));
	a->next->content = 2;
	a->next->next = (a_stack *)malloc(sizeof(struct s_list));
	a->next->next->content = 3;
	a->next->next->next = (a_stack *)malloc(sizeof(struct s_list));
	a->next->next->next->content = 4;
	a->next->next->next->next = NULL;

	b = (b_stack *)malloc(sizeof(struct s_list));
	b->content = 1;
	b->next = (b_stack *)malloc(sizeof(struct s_list));
	b->next->content = 2;
	b->next->next = (b_stack *)malloc(sizeof(struct s_list));
	b->next->next->content = 3;
	b->next->next->next = (b_stack *)malloc(sizeof(struct s_list));
	b->next->next->next->content = 5;
	b->next->next->next->next = NULL;

	printf("a stack\n");
	printlist(a);
	printf("\nb stack\n");
	printlist(b);
	printf("\n-------------\n");
	pa(&a,&b);
	//rrb(&b);
	printlist(a);
	printf("\n");
	//rrr(&a,&b);
	printlist(b);
	printf("deneme");
	printf("denem2");
	printf("burak");
}
