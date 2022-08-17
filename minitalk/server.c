/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:16:19 by bkozluca          #+#    #+#             */
/*   Updated: 2022/08/17 10:38:47 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int	g_i = 128;

void	ft_putnbr(int pid)
{
	char	c;

	if (pid >= 10)
		ft_putnbr(pid / 10);
	c = (pid % 10) + 48;
	write (1, &c, 1);
}

void	mesaj(int sig)
{
	static char	a = 0;

	if (sig == SIGUSR2)
		a += g_i;
	g_i /= 2;
	if (g_i == 0)
	{
		write(1, &a, 1);
		a = 0;
		g_i = 128;
	}
}

int	main(void)
{
	ft_putnbr(getpid());
	write(1, "\n", 1);
	while (1)
	{
		signal(SIGUSR1, mesaj);
		signal(SIGUSR2, mesaj);
	}
	return (0);
}
