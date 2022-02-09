#include "../header.h"

void ft_bzero_tests(void)
{
	char dest[30 + 1] = "";
	char ft_dest[30 + 1] = "";

	bzero(dest, 5);
	ft_bzero(ft_dest, 5);

	if (memcmp(dest, ft_dest, 5) == 0 )
		printf("ft_bzero: OK!\n");
	else
		printf("ft_bzero: ERROR\n");
}
