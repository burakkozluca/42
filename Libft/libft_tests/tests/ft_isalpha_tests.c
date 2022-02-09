#include "../header.h"

// word should be between 'a' and 'z'
static int test00(void)
{
	char letter = 'a';
	int words = 26;
	int is_alpha = 0;
	int is_alpha_ft = 0;

	while(words--)
	{
		is_alpha = isalpha(letter);
		is_alpha_ft = ft_isalpha(letter);
		if (!is_alpha || !is_alpha_ft)
		{
			printf("->%d\n", is_alpha);
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
	int is_alpha = 0;
	int is_alpha_ft = 0;

	while(words--)
	{
		is_alpha = isalpha(letter);
		is_alpha_ft = ft_isalpha(letter);
		if (!is_alpha || !is_alpha_ft)
		{
			printf("ERROR (word should be between 'A' and 'Z')\n");
			return (0);
		}
		letter++;
	}

	return (1);
}

// should be false if word is not a~z or A~Z
static int test02(void)
{
	char letter = 0;
	int total = 255;
	int is_alpha = 0;
	int is_alpha_ft = 0;

	while(total--)
	{
		if( (letter < 'a' || letter > 'z') && (letter < 'A' || letter > 'Z'))
		{
			is_alpha = isalpha(letter);
			is_alpha_ft = ft_isalpha(letter);
			if (is_alpha || is_alpha_ft)
			{
				printf("ERROR (it should be FALSE if word is not a~z or A~Z)\n");
				return (0);
			}
		}
		letter++;
	}
	return (1);
}


void ft_isalpha_tests(void)
{
	if (test00() && test01() && test02())
		printf("ft_isalpha..: OK!\n");
	else
		printf("ft_isalpha..: ERROR\n");
}
