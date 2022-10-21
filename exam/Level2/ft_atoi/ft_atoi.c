#include <unistd.h>

int	ft_atoi(char *s)
{
	int sign;
	int r;

	while (*s <= 32)
		s++;
	if(*s == '-' || *s == '+')
	{
		if(*s == '-')
			sign = -1;
		s++;
	}
	while (*s >= '0' || *s <= '9')
	{
		r = r * 10 + *s - '0';
		s++;
	}
	return(sign * (int)r);
}
