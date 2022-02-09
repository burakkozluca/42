#include "../header.h"

void ft_memset_tests(void)
{
	char dest[30 + 1] = "";
	char ft_dest[30+1] = "";
	size_t i;
	size_t src_len;

	memset(dest, 'a', 5);
	ft_memset((char *)ft_dest, 'a', 5);
		

	if(strcmp(memset(dest, 'a', 5), ft_memset(ft_dest, 'a', 5)) == 0)
		printf("ft_memset: OK!\n");
	else
		printf("ft_memset: ERROR\n");
}
