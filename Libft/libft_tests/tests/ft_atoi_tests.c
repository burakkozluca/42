#include "../header.h"

// it should return 3232 if str="3232"
static int test00(void)
{
	char str[] = "3232";
	int response = atoi(str);

	if(response == 3232)
		return (1);
	else
	{
		printf("TEST (it should return 3232 if str=\"3232\")\n");
		return (0);
	}
}

// it should return -3232 if str="-3232"
static int test01(void)
{
	char str[] = "-3232";
	int response = atoi(str);
	int response_ft = ft_atoi(str);

	if(response == -3232 && response == response_ft)
		return (1);
	else
	{
		printf("TEST (it should return -3232 if str=\"-3232\"\n)");
		return (0);
	}
}

// it should return -3232 if str= "     /t/t-3232   "
static int test02(void)
{
	char str[] = "\t\n\v\f\r   -3232 \t\n\v\f\r";
	int response = atoi(str);
	int response_ft = ft_atoi(str);

	if(response == -3232 && response == response_ft)
		return (1);
	else
	{
		printf("TEST (it should return -3232 if src has isSpace() concatenated with some number)\n");
		return (0);
	}
}

// it should return 0 if str has 2 or mor signals
static int test03(void)
{
	char str[] = "--3232";
	int response = atoi(str);
	int response_ft = ft_atoi(str);

	if(response == 0 && response == response_ft)
		return (1);
	else 
	{
		printf("TEST (it should render return 0 if str has two or more signals)\n");
		return (0);
	}
}


// it should return 0 if str has 2 signals and spaces
static int test04(void)
{
	char str[] = "  \t\n\v\f\r--3232\t\n\v\f\r";
	int response = atoi(str);
	int response_ft = ft_atoi(str);

	if(response == 0 && response == response_ft)
		return (1);
	else
		return (0);
}

static void sample(void)
{
	char str[] = " \t\n\v\f\r   -3232 \t\n\v\f\r   ";
	printf("-----\n");
	printf("sample\n");
	printf("atoi..: %d\n", atoi(str));
	printf("ft_atoi..: %d\n", ft_atoi(str));
	printf("-----\n");
}

void ft_atoi_tests(void)
{
	if (test00() && test01() && test02() && test03() && test04())
		printf("ft_atoi..: OK!\n");
	else
		printf("ft_atoi..: ERROR\n");
	//sample();
}

