/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:48:41 by bkozluca          #+#    #+#             */
/*   Updated: 2022/03/03 17:43:36 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	result;

	i = 0;
	s = 1;
	result = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - '0') + (result * 10);
		i++;
	}
	return (result * s);
}
int main(void)
{
	printf("***  ft_atoi  ***\nisspace karakterlerini arar");
	char* s1 = "---123";
	char* s2 = "---123";
	char* s3 = "  123aa";
	char* s4 = "123 425";
	int num1 = ft_atoi(s1);
	int num2 = atoi(s2);
	int num3 = ft_atoi(s3);
	int num4 = ft_atoi(s4);
	printf("\n%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);
	printf("%d\n", num4);
}
