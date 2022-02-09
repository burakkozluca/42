all:	part_one part_two
	clear
	@echo 
	@echo "Running tests..."
	@echo "--------------------------------------------"
	@gcc ../00-libft/*.a ./out/*.o  main.c -g && ./a.out
	@echo "--------------------------------------------"
	@echo "Tests Concluded! <3"
	@echo 

part_one:
	@gcc -c -g ./tests/ft_bzero_tests.c -o ./out/ft_bzero_tests.o
	@gcc -c -g ./tests/ft_memset_tests.c -o ./out/ft_memset_tests.o
	@gcc -c -g ./tests/ft_memcpy_tests.c -o ./out/ft_memcpy_tests.o
	@gcc -c -g ./tests/ft_memccpy_tests.c -o ./out/ft_memccpy_tests.o
	@gcc -c -g ./tests/ft_memmove_tests.c -o ./out/ft_memmove_tests.o
	@gcc -c -g ./tests/ft_memchr_tests.c -o ./out/ft_memchr_tests.o
	@gcc -c -g ./tests/ft_memcmp_tests.c -o ./out/ft_memcmp_tests.o
	@gcc -c -g ./tests/ft_strlen_tests.c -o ./out/ft_strlen_tests.o
	@gcc -c -g ./tests/ft_strlcpy_tests.c -o ./out/ft_strlcpy_tests.o
	@gcc -c -g ./tests/ft_strlcat_tests.c -o ./out/ft_strlcat_tests.o
	@gcc -c -g ./tests/ft_strchr_tests.c -o ./out/ft_strchr_tests.o
	@gcc -c -g ./tests/ft_strrchr_tests.c -o ./out/ft_strrchr_tests.o
	@gcc -c -g ./tests/ft_strnstr_tests.c -o ./out/ft_strnstr_tests.o
	@gcc -c -g ./tests/ft_strncmp_tests.c -o ./out/ft_strncmp_tests.o
	@gcc -c -g ./tests/ft_atoi_tests.c -o ./out/ft_atoi_tests.o
	@gcc -c -g ./tests/ft_isalpha_tests.c -o ./out/ft_isalpha_tests.o
	@gcc -c -g ./tests/ft_isdigit_tests.c -o ./out/ft_isdigit_tests.o
	@gcc -c -g ./tests/ft_isalnum_tests.c -o ./out/ft_isalnum_tests.o
	@gcc -c -g ./tests/ft_isascii_tests.c -o ./out/ft_isascii_tests.o
	@gcc -c -g ./tests/ft_isprint_tests.c -o ./out/ft_isprint_tests.o
	@gcc -c -g ./tests/ft_toupper_tests.c -o ./out/ft_toupper_tests.o
	@gcc -c -g ./tests/ft_tolower_tests.c -o ./out/ft_tolower_tests.o
	@gcc -c -g ./tests/ft_calloc_tests.c -o ./out/ft_calloc_tests.o
	@gcc -c -g ./tests/ft_strdup_tests.c -o ./out/ft_strdup_tests.o

part_two:
	gcc -c -g ./part_two_tests/ft_substr_tests.c -o ./out/ft_substr_tests.o
	gcc -c -g ./part_two_tests/ft_strtrim_tests.c -o ./out/ft_strtrim_tests.o
	gcc -c -g ./part_two_tests/ft_split_tests.c -o ./out/ft_split_tests.o
	gcc -c -g ./part_two_tests/ft_itoa_tests.c -o ./out/ft_itoa_tests.o

clean:
	@rm -f a.out
	@rm -f ./out/*.o
	@echo "Cleaned output files! :)"

