#include "../header.h"

static int test00(void)
{
	char *str = "@@@@@@zzzz@@@@@@ajust@a@test@to@split!@zzz@aaa@as@d";
	char c    = '@';
	//char *str = "z@w@w@w@w!wzw@w@@wzwzw@w@wawjw@w@@ust!@a@t!est@t!o@spl@@it!@zzz@a@@@@@aa@as@d@@@";
	//char c    = '@';
	//char ** result = ft_split("  tripouille  42  ", ' ');

	char **result = ft_split(str, c);
/*
	int i;
	i = 0;
	printf("\n");
	while(i < 1)
	{
		printf("%s\n", result[i]);
		i++;
	}
*/
	return (1);
}


void ft_split_tests(void)
{
	if (test00())
		printf("ft_split..: OK!\n");
	else
		printf("ft_split..: ERROR\n");
}
