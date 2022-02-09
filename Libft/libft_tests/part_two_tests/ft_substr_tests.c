#include "../header.h"

static int test00(void)
{
	char *s = ft_substr("abcdefgh", 0, 42000);
	if (strcmp(s, "abcdefgh") == 0)
		return (1);
	else 
	{
		printf("ERROR (test00)\n");
		return (0);
	}
}


void ft_substr_tests(void)
{
	if (test00())
		printf("ft_substr_tests..: OK!\n");
	else
		printf("ft_substr_tests..: ERROR\n");
}
