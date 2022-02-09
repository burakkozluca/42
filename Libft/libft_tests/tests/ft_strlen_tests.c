#include "../header.h"

void	ft_strlen_tests(void)
{
	char str[] = "abcdefg";
	int result = strlen(str);
	int result_ft = ft_strlen(str);

	if(result == result_ft)
		printf("ft_strlen..: OK!\n");
	else
		printf("ft_strlen..: ERROR\n");
}
