#include "../header.h"

static int test00(void)
{
	int i;
	int *ptr = calloc(10, sizeof(int));
	int *ptr_ft = ft_calloc(10, sizeof(int));

	i = 0;
	while(i < 10)
	{
		if(ptr_ft[i] != 0)
		{
			printf("ERROR (it should fill with zeros)\n");
			return (0);
		}
		i++;
	}

	if(memcmp(ptr, ptr_ft, 10) != 0)
	{
		printf("ERROR (it should be same as calloc)\n");
		return (0);
	}
	return (1);
}

void ft_calloc_tests(void)
{
	if(test00())
		printf("ft_calloc..: OK!\n");
	else
		printf("ft_calloc..: ERROR\n");

}
