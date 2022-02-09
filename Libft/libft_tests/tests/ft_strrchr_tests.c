#include "../header.h"

int ft_strrchr_test00(void)
{
	char str[] = "abcdefg";
	char c = 'e';
	/*
	printf("strchr..: %p\n", strchr(str, c));
	printf("ft_strchr..: %p\n", ft_strchr(str, c));
	*/
	if(strrchr(str, c) == ft_strrchr(str, c))
		return (1);
	return (0);
}


void ft_strrchr_tests(void)
{
	if(ft_strrchr_test00())
		printf("ft_strrchr..: OK!\n");
	else
		printf("ft_strrchr..: ERROR\n");
}
