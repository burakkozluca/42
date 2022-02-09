#include "../header.h"

int strlcpy_test01(void)
{
	char dst[30];
	char dst_ft[30];
	char str[30] = "abcdefg";

	return (strlcpy(dst, str, 4) == ft_strlcpy(dst, str, 4) && strcmp(dst, dst_ft) ? 1 : 0);
}

void ft_strlcpy_tests(void)
{
	if(strlcpy_test01()) 
		printf("ft_strlcpy..: OK!\n");
	else
		printf("ft_strlcpy..: ERROR\n");
}

