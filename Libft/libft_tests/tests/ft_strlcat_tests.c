#include "../header.h"

int test00(void)
{
	char dst[30]="abc";
	char dst_ft[30] = "abc";
	char src[30]="efghijklmnopqrst";
	size_t dstsize = 0;

	size_t response = strlcat(dst, src, dstsize);
	size_t response_ft = ft_strlcat(dst_ft, src, dstsize);

	/*
	printf("strlen(dst)..: %lu\n", strlen(dst));
	printf("strlen(src)..: %lu\n", strlen(src));
	printf("dst..: %s\n", dst);
	printf("dst_ft..: %s\n", dst_ft);

	printf("response..: %lu\n", response);
	printf("response_ft..: %lu\n", response_ft);
	*/

	if(response == response_ft && strcmp(dst, dst_ft) == 0)
		return 1;
	else
		return 0;

}


void	ft_strlcat_tests(void)
{
	if (test00())
		printf("ft_strlcat..: OK!\n");
	else
		printf("ft_strlcat..: ERROR\n");
}
