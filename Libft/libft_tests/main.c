/*
 * Intructions to test
 * gcc <PATH>*.o main.c && a.out
 */

#include "header.h"

static void print_heading(char *title)
{
	printf("\n");
	printf("###########################################\n");
	printf("# %s\n", title);
	printf("#\n");
	printf("###########################################\n");
}
static void part_one_tests(void)
{
	print_heading("Part 01");

	ft_memset_tests();
	ft_bzero_tests();
	ft_memcpy_tests();
	ft_memccpy_tests();
	ft_memmove_tests();
	ft_memchr_tests();
	ft_memcmp_tests();
	ft_strlen_tests();
	ft_strlcpy_tests();
	ft_strlcat_tests();
	ft_strchr_tests();
	ft_strrchr_tests();
	ft_strnstr_tests();
	ft_strncmp_tests();
	ft_atoi_tests();
	ft_isalpha_tests();
	ft_isdigit_tests();
	ft_isalnum_tests();
	ft_isascii_tests();
	ft_isprint_tests();
	ft_toupper_tests();
	ft_tolower_tests();
	ft_calloc_tests();
	ft_strdup_tests();
}

static void part_two_tests(void)
{
	print_heading("Part 02");

	ft_substr_tests();
	ft_strtrim_tests();
	ft_split_tests();
}

int	main(void)
{
	//part_one_tests();
	//part_two_tests();
	ft_itoa_tests();	
	return (0);
}

