#include "../header.h"

// It Should return NULL when pass len that does not reach complete word in haystrack
int ft_strnstr_test00(void)
{
	char haystrack[] = "this is just a test";
	char needle[] = "just";
	size_t len = 11;

	char *response = strnstr(haystrack, needle, len);
	char *response_ft = ft_strnstr(haystrack, needle, len);
	/*
	if(response != NULL)
	{
		printf("response..: %p\n", response);
		printf("char..: %c\n", *response);
	}
	*/

	if(response == response_ft) return 1;
	else return 0;

}

// It Should return address of 'j' in haystrack when len > 12
int ft_strnstr_test01(void)
{
	char haystrack[] = "this is just a test";
	char needle[] = "just";
	size_t len = 12;

	char *response = strnstr(haystrack, needle, len);
	char *response_ft = ft_strnstr(haystrack, needle, len);

	int i = 0;
	
	while(*(haystrack+i) != 'j')
		i++;

	if(response == (haystrack + i) && response == response_ft)
		return (1);
	return (0);
}

// It Should return &hatystrack if needle is a empty string
int ft_strnstr_test02(void)
{
	char haystrack[] = "abcdef";
	char needle[] = "";
	size_t len = 12;

	char *response = strnstr(haystrack, needle, len);
	char *response_ft = ft_strnstr(haystrack, needle, len);

	/*
	printf("--> %p\n", haystrack);
	printf("-> %p\n", response);
	printf("-> %p\n", response_ft);
	*/

	if(response == response_ft)
		return (1);
	return (0);
}

static int test03(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	size_t len = -1;

	char *response = strnstr(haystack, needle, len);
	char *response_ft = ft_strnstr(haystack, needle, len);

	if(response == response_ft)
		return (1);

	printf("ERROR (test03)\n");
	return (0);
}

static int test04(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10]  = "abcd";
	size_t len = 9;

	char *response = strnstr(haystack, needle, len);
	char *response_ft = ft_strnstr(haystack, needle, len);

	if(response == response_ft)
		return (1);

	printf("ERROR (test03)\n");
	return (0);
	 
}


void ft_strnstr_tests(void)
{
	//if (ft_strnstr_test00() && ft_strnstr_test01() && ft_strnstr_test02() && test03())
	if (test03() && test04())
		printf("ft_strnstr..:: OK!\n");
	else
		printf("ft_strnstr..: ERROR\n");
}
