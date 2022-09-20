/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:43:43 by bkozluca          #+#    #+#             */
/*   Updated: 2022/09/20 17:10:35 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return ;
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int				i;
	unsigned long	ret;
	int				isnegative;

	i = 0;
	ret = 0;
	isnegative = 1;
	while (str[i] == '\n' && str[i] == ' ')
		i++;
	if (str[i] == '-')
		isnegative *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = (ret * 10) + (str[i] - '0');
		i++;
	}
	if ((ret > 2147483647 && isnegative != -1)
		|| (ret > 2147483648 && isnegative == -1))
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	return (ret * isnegative);
}

t_stack	*to_int(char **str, int ac)
{
	t_stack	*ret;
	int		len;

	ret = NULL;
	while (--ac >= 1)
	{
		len = ft_strlen(str[ac]);
		while (str[ac][--len] && len >= 0)
		{
			while ((str[ac][len] >= '0' && str[ac][len] <= '9')
			|| str[ac][len] == '-')
				len--;
			push(&ret, ft_atoi(&str[ac][len + 1]));
			while (str[ac][len] == ' ')
				len--;
			if (len == 0)
				push(&ret, ft_atoi(&str[ac][len]));
		}
	}
	return (ret);
}
