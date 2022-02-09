#include "../header.h"

// word should be between '0' and '9'
static int test00(void)
{
	char letter = '0';
	int words = 10;
	int is_digit = 0;
	int is_digit_ft = 0;

	while(words--)
	{
		is_digit = isdigit(letter);
		is_digit_ft = ft_isdigit(letter);
		if (!is_digit || !is_digit_ft)
		{
			printf("ERROR (word should be between '0' and '9')\n");
			return (0);
		}
		letter++;
	}

	return (1);
}

// should be false if word is not a~z or A~Z
static int test01(void)
{
	char letter = 0;
	int total = 255;
	int is_digit = 0;
	int is_digit_ft= 0;

	while(total--)
	{
		if( (letter < '0' || letter > '9') ) 
		{
			is_digit = isdigit(letter);
			is_digit_ft = ft_isdigit(letter);
			if (is_digit || is_digit_ft)
			{
				printf("ERROR (it should be FALSE if word is not between 0~9)\n");
				return (0);
			}
		}
		letter++;
	}
	return (1);
}


void ft_isdigit_tests(void)
{
	if (test00() && test01())
		printf("ft_isdigit..: OK!\n");
	else
		printf("ft_isdigit..: ERROR\n");
}
