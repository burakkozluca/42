#include "../header.h"

void ft_memccpy_tests(void)
{
	char dst[30], dst_ft[30];
	char src[30] = "abcdefg";
	int c = 'z';
	size_t n = 3;
	int i;

	void *response = memccpy(dst, src, c, n);
	void *response_ft = ft_memccpy(dst_ft, src, c, n);
/*
	printf("dst..: %s\n", dst);
	printf("dst_ft..: %s\n", dst_ft);

	printf("response IsNull? ");
	(response == NULL) ? printf("Yes\n") : printf("No\n");
	printf("response_ft IsNull? ");
	(response_ft == NULL) ? printf("Yes\n") : printf("No\n");
*/	

	i = 0;
	while(*(src+i))
	{
		if (*(src+i) == c)
			return;
		i++;
	}
	int totalN = (i < n) ? i : n;

	if(memcmp(dst, dst_ft, totalN) == 0)
		printf("ft_memccpy..: OK\n");
	else
		printf("ft_memccpy..: ERROR\n");
		
}
