#include "../header.h"

// word should be between 'a' and 'z'
static int test00(void)
{
	char letter = 'a';
	int words = 26;
	int is_alnum = 0;
	int is_alnum_ft = 0;

	while(words--)
	{
		is_alnum = isalnum(letter);
		is_alnum_ft = ft_isalnum(letter);
		if (!is_alnum || !is_alnum_ft)
		{
			printf("ERROR (word should be between 'a' and 'z')\n");
			return (0);
		}
		letter++;
	}

	return (1);
}

//word should be between 'A' and 'Z'
static int test01(void)
{
	char letter = 'A';
	int words = 26;
	int is_alnum = 0;
	int is_alnum_ft = 0;

	while(words--)
	{
		is_alnum = isalnum(letter);
		is_alnum_ft = ft_isalnum(letter);
		if (!is_alnum || !is_alnum_ft)
		{
			printf("ERROR (word should be between 'A' and 'Z')\n");
			return (0);
		}
		letter++;
	}

	return (1);
}


// word should be between '0' and '9'
static int test02(void)
{
	char letter = '0';
	int words = 10;
	int is_alnum = 0;
	int is_alnum_ft = 0;

	while(words--)
	{
		is_alnum = isalnum(letter);
		is_alnum_ft = ft_isalnum(letter);
		if (!is_alnum || !is_alnum_ft)
		{
			printf("ERROR (word should be between '0' and '9')\n");
			return (0);
		}
		letter++;
	}

	return (1);
}



// should be false if word is not a~z or A~Z
static int test03(void)
{
	char letter = 0;
	int total = 255;
	int is_alnum = 0;
	int is_alnum_ft = 0;

	while(total--)
	{
		if( (letter < 'a' || letter > 'z') && (letter < 'A' || letter > 'Z') && (letter < '0' || letter > '9'))
		{
			is_alnum = isalnum(letter);
			is_alnum_ft = ft_isalnum(letter);
			if (is_alnum|| is_alnum_ft)
			{
				printf("ERROR (it should be FALSE if word is not a~z or A~Z)\n");
				return (0);
			}
		}
		letter++;
	}
	return (1);
}


void ft_isalnum_tests(void)
{
	if (test00() && test01() && test02() && test03())
		printf("ft_isalnum..: OK!\n");
	else
		printf("ft_isalnum..: ERROR\n");
}
