#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int ft_atoi(char *str)
{
	int result = 0;
	int sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if(*str == '-')
		sign = -1;
	if(*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

int is_prime(int n)
{
	int i;

	i = 2;
	while (i < n)
	{
		if(!(n % i++))
			return (0);
	}
	return (1);
}
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = (nb % 1000000000 * -1);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = (nb * -1);
	}
	if (nb / 10 > 0)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int main(int ac,char **av)
{
	int sum = 0;
	int nb = ft_atoi(av[1]);

	if (ac == 2)
	{
		while (nb > 0)
			if(is_prime(nb--))
				sum += (nb + 1);
		ft_putnbr(sum);
	}
	if (ac != 2)
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}
