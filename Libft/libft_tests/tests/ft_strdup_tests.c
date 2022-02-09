#include "../header.h"

static int test00(void)
{
	char *base = "hello world";
	char *str;
	char *str_ft;

	str = strdup(base);
	str_ft = ft_strdup(base);
	//int i = 0;
	/*
	while(*(str + i))
	{
		printf("%c ", *(str + i));
		i++;
	}
	*/
	if (strcmp(str, base) != 0 || strcmp(str, str_ft) != 0)
	{
		printf("ERROR(str != base)\n");
		return (0);
	}
	//printf("\n");
	free(str);
	free(str_ft);
	return (1);
}


void ft_strdup_tests(void)
{
	if (test00())
		printf("ft_strdup..: OK!\n");
	else
		printf("ft_strdup..: ERROR\n");
}
