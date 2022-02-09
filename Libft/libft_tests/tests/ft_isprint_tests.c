#include "../header.h"

static int test00(void)
{
	int i = 32;
	int response;
	int response_ft;

	while (i <= 126)
	{
		response = isprint(i);
		response_ft = ft_isprint(i);
		if (!response || !response_ft)
		{
			printf("ERROR: (it should be true if range is between 0~126)\n");
			return (0);
		}
		i++;
	}
	return (1);
}

static int test01(void)
{
	int i = -10;
	int response;
	int response_ft;

	while (i <= 300)
	{
		if( i < 0 || i > 126) 
		{
			response = isprint(i);
			response_ft = ft_isprint(i);
			if (response || response_ft)
			{
				printf("ERROR: (it should be false if range is less than 0 and greather than 126)\n");
				return (0);
			}
		}
		i++;
	}
	return (1);
}

void ft_isprint_tests(void)
{
	if(test00() && test01())
		printf("ft_isprint..: OK!\n");
	else
		printf("ft_isprint..: ERROR\n");
}
