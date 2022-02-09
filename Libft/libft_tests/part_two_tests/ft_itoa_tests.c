#include "../header.h"


static int test00(void)
{
	char *result = ft_itoa(432);

	free(result);
	return (1);
}

void ft_itoa_tests(void)
{
	if(test00())
		printf("ft_itoa..: OK!\n");
	else
		printf("ft_itoa..: ERROR\n");
}
