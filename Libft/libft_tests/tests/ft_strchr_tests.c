#include "../header.h"

int ft_strchr_test00(void)
{
	char str[] = "abcdefg";
	char c = 'b';
	/*
	printf("strchr..: %p\n", strchr(str, c));
	printf("ft_strchr..: %p\n", ft_strchr(str, c));
	*/
	if(strchr(str, c) == ft_strchr(str, c))
		return (1);
	return (0);
}


void ft_strchr_tests(void)
{
	if(ft_strchr_test00())
		printf("ft_strchr..: OK!\n");
	else
		printf("ft_strchr..: ERROR\n");
}
