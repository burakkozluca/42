#include "../header.h"

// it should return positive if s1 grather than s2 
static int test00(void)
{
	return strncmp("zzz", "aaa", 3) > 0 && ft_strncmp("zzz", "aaa", 3) > 0  ? 1 : 0;
}

// it should return negative if s1 less than s2
static int test01(void)
{
	return strncmp("aaa", "zzz", 3) && ft_strncmp("aaa", "zzz", 3) < 1 ? 1 : 0;
}

// it Should return 0 if s1 equal to s2
static int test02(void)
{
	return strncmp("abc", "abc", 3) == 0 && ft_strncmp("abc", "abc", 3) == 0 ? 1 : 0;
}


// it should return positive if s1[0..n] greather than s2[0..n]
static int test03(void)
{
	return strncmp("zab", "aab", 1) > 0 && ft_strncmp("zap", "aab", 1) > 0 ? 1 : 0;
}

// it should return negative if s1[0..n] less than s2[0..n]
static int test04(void)
{
	return strncmp("aab", "zab", 1) < 0 && ft_strncmp("aab", "zap", 1) < 0 ? 1 : 0;
}

// it should return 0 if n is 0
static int test05(void)
{
	return strncmp("abc", "asd", 0) == 0 && strncmp("abc", "asd", 0) == 0 ? 1 : 0;
}

static void samples()
{
	char str1[] = "abcdef";
	char str2[] = "a";
	size_t n = 10;

	printf("-------\n");
	printf("Samples\n");
	printf("strncmp..: %d\n", strncmp(str1, str2, n));
	printf("ft_strcmp..: %d\n", ft_strncmp(str1, str2, n));
	printf("-------\n");
}


void ft_strncmp_tests(void)
{
	if(test00() && test01() && test02() && test03() && test04() && test05())
		printf("ft_strncmp..: OK!\n");
	else
		printf("ft_strncmp..: ERROR\n");
	//samples();
}

