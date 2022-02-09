#include "../header.h"

//it should return TRUE if 'c' is between 0~127
static int test00(void)
{
	int i;
	int response;
	int response_ft;

	i = 0;
	while(i <= 127)
	{
		response = isascii(i);
		response_ft = ft_isascii(i);
		if (!response || !response_ft)
		{
			printf("ERROR (it should return TRUE if 'c' is between 0~127)\n");
			return (0);
		}

		i++;
	}

	return (1);
}

static int test01(void)
{
	int i;
	int response;
	int response_ft;

	i = -10;
	while(i < 300)
	{
		if (i < 0 || i > 127)
		{
			response = isascii(i);
			response_ft = ft_isascii(i);
			if (response || response_ft)
			{
				printf("ERROR (it not should be TRUE if 'c' is not in range 0~127)\n");
				return(0);
			}
		}
		i++;
	}

	return (1);
}

void ft_isascii_tests(void)
{
	if (test00() && test01())
		printf("ft_isascii..: OK!\n");
	else
		printf("ft_isascii..: ERROR\n");
}
