#include "../header.h"

static int test00(void)
{
	int i;

	i = -10;
	
	while(i < 300)
	{
		if ( i >= 97 && i <= 122 )
		{
			if (toupper(i) == (char)i || ft_toupper(i) == (char)i)
			{
				printf("ERROR (it should change to uppercase when char is lower)\n");
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
		if ( i < 97 && i > 122 )
		{
			if (toupper(i) != (char)i || ft_toupper(i) != (char)i)
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
	int c = 'a';

	if (toupper(c) == ft_toupper(c)) 
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
		if ( (char)i != (char)toupper(i))
		{
			printf("%d..:  %c -> %c\n", i, (char)i, (char)toupper(i));
		}
		i++;
	}
}
void ft_toupper_tests(void)
{
	if (test00() && test01() && test02())
		printf("ft_toupper..: OK!\n");
	else
		printf("ft_toupper..: ERROR\n");
	//describe00();
}
