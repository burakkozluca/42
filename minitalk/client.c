/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:14:37 by bkozluca          #+#    #+#             */
/*   Updated: 2022/08/17 10:38:35 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	a;
	int	tmp;

	i = 0;
	a = 1;
	tmp = 0;
	while (str[i] == ' ' || (str[i] <= '\r' && str[i] >= '\t'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			a *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		tmp = tmp * 10 + str[i] - 48;
		i++;
	}
	if (str[i] != '\0')
		return (0);
	return (tmp * a);
}

int	main(int ac, char **av)
{
	int	mask;
	int	i;
	int	j;

	if (ac != 3)
		return (write(1, "Eroor!\n", 7));
	i = strlen(av[2]);
	j = 0;
	while (i--)
	{
		mask = 128;
		while (mask > 0)
		{
			if ((av[2][j] & mask) == 0)
				kill(ft_atoi(av[1]), SIGUSR1);
			else
				kill(ft_atoi(av[1]), SIGUSR2);
			usleep(100);
			mask /= 2;
		}
		j++;
	}
}
