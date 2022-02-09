#include "../header.h"

void ft_memmove_tests(void)
{
	char dst[30];
	char dst_ft[30];
	char src[] = "abc";
	size_t len = 3;

	void *response = memmove(dst, src, len);
	void *response_ft = ft_memmove(dst_ft, src, len);
/*
	printf("dst..:%s\n", dst);
	printf("dst_ft..:%s\n", dst_ft);
	printf("response..: %s\n",(char *)response);
	printf("response_ft..: %s\n", (char *)response_ft);
	printf("-->%p %p\n", dst, src);
*/
	if(memcmp(dst, dst_ft, len) == 0)
		printf("ft_memmove..: OK\n");
	else
		printf("ft_memmove..: ERROR\n");
		
}
