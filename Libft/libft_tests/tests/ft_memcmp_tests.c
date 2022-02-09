#include "../header.h"


int test01()
{
	char str1[] = "abcdefg";
	char str2[] = "abcdefh";
	int n = 7;

	int response = memcmp(str1, str2, n);
	int response_ft = ft_memcmp(str1, str2, n);

	return (response == response_ft) ? 1 : 0;
}

int test02()
{
	char str1[] = "abcdefg";
	char str2[] = "abcdefh";
	int n = 6;

	int response = memcmp(str1, str2, n);
	int response_ft = ft_memcmp(str1, str2, n);

	return (response == response_ft) ? 1 : 0;
}


void	ft_memcmp_tests(void)
{
	if(test01() && test02())
		printf("ft_memcmp..: OK!\n");
	else
		printf("ft_memcmp..: ERROR\n");
}
