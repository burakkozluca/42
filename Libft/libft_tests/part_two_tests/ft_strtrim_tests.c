#include "../header.h"

static int test00(void)
{
	char	*s1 = "hello world";
	//char	*set ="heldr"; // "o wo"
	//char	*set = "held"; //remove 6
	char	*set = "hel";
	char	*result = ft_strtrim(s1, set);

	if (strcmp(result, "o world") == 0)
	{
		return (1);
	}
	else
	{
		printf("ERROR (test00)");
	}
	return (1);
}

static int test01(void)
{
	char	*s1 = "hello world";
	char	*set = "held";
	char	*result = ft_strtrim(s1, set);
	if (strcmp(result, "o wor") == 0)
	{
		return (1);
	}
	else
	{
		printf("ERROR (test01)");
		return (0);
	}
}

static int test02(void)
{
	char	*s1 = "hello world";
	char	*set = "heldr";
	char	*result = ft_strtrim(s1, set);
	if (strcmp(result, "o wo") == 0)
	{
		return (1);
	}
	else
	{
		printf("ERROR (test02)");
		return (0);
	}
}

static int test03(void)
{
	char	*s1 = "hello world";
	char	*set = "heldro";
	char	*result = ft_strtrim(s1, set);
	if (strcmp(result, " w") == 0)
	{
		return (1);
	}
	else
	{
		printf("ERROR (test03)");
		return (0);
	}
}

static int test04(void)
{
	char	*s1 = "hello world";
	char	*set = "helo word";
	char	*result = ft_strtrim(s1, set);
	if (strcmp(result, "") == 0)
	{
		return (1);
	}
	else
	{
		printf("ERROR (test04)");
		return (0);
	}
}

static int test05(void)
{
	char	*s1 = "     hello world";
	char	*set = "helo word";
	char	*result = ft_strtrim(s1, set);
	if (strcmp(result, "") == 0)
	{
		return (1);
	}
	else
	{
		printf("ERROR (test05)");
		return (0);
	}
}

static int test06(void)
{
	char	*s1 = "     hello world     ";
	char	*set = "helo word";
	char	*result = ft_strtrim(s1, set);
	if (strcmp(result, "") == 0)
	{
		return (1);
	}
	else
	{
		printf("ERROR (test06)");
		return (0);
	}
}


void ft_strtrim_tests(void)
{
	if(test00() && test01() && test02() && test03() && test04() && test05() && test06())
		printf("ft_strtrim..: OK\n");
	else
		printf("ft_strtrim..: ERROR\n");
}
