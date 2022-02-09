#include "../header.h"

void ft_memcpy_tests(void)
{
	char dest[30] = "";
	char ft_dest[30] = "";

	memcpy(dest, "abcdefg", 3);
	ft_memcpy(ft_dest, "abcdefg", 3);

	if (memcmp(dest, ft_dest, 5) == 0)
		printf("ft_memcpy: OK!\n");
	else
		printf("ft_memcpy: ERROR\n");

}
