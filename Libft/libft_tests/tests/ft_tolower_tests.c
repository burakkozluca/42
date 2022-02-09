#include "../header.h"

static int test00(void)
{
	int i;

	i = -10;
	
	while(i < 300)
	{
		if ( i >= 65 && i <= 90 )
		{
			if (tolower(i) == (char)i || ft_tolower(i) == (char)i)
			{
				printf("ERROR (it should change to lowercase when char is upper)\n");
				return (0);

			}
		}
		i++;
	}
	return (1);
}

static int test01(void)
{
	int i;

	i = -10;
	
	while(i < 300)
	{
		if ( i < 65 && i > 90 )
		{
			if (tolower(i) != (char)i || ft_tolower(i) != (char)i)
			{
				printf("ERROR (it should to not change when char is not a-A)\n");
				return (0);

			}
		}
		i++;
	}
	return (1);
}

static int test02(void)
{
	int c = 'A';
	if (tolower(c) == ft_tolower(c)) 
		return (1);
	printf("ERROR (test02)\n");
	return (0);
}

static void describe00(void)
{
	int i;

	i = -10;
	printf("letters to change..:\n");
	while(i < 300)
	{
		if ( (char)i != (char)tolower(i))
		{
			printf("%d..:  %c -> %c\n", i, (char)i, (char)tolower(i));
		}
		i++;
	}
}
void ft_tolower_tests(void)
{
	if (test00() && test01() && test02())
		printf("ft_tolower..: OK!\n");
	else
		printf("ft_tolower..: ERROR\n");
	//describe00();
}
