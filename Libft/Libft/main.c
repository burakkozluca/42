#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"
#include <fcntl.h>

void	alt_cizhi()
{
	printf("\n------------------------  000000  ------------------------\n");
}

void	test_isalpha ()
{
	printf("*** isalpha ***\nmain dosyası yazılmadı");
	alt_cizhi();
}

void	test_isdigit ()
{
	printf("*** ft_isdigit ***  \nGönderilen parametre rakammı diye sorgular\n");
	char c1 = '3', c2 = '7', c3 = 'M';
	printf("%c bir rakam%s\n", c1, ft_isdigit(c1) ? "dır!" : " değildir!");
	printf("%c bir rakam%s\n", c2, ft_isdigit(c2) ? "dır!" : " değildir!");
	printf("%c bir rakam%s", c3, ft_isdigit(c3) ? "dır!" : " değildir!");
	alt_cizhi();
}

void	test_isalnum ()
{
	printf("*** test_isalnum ***\n");
	printf("main dosyası yazılmadı");
	alt_cizhi();
}

void	test_isascii ()
{
	printf("*** ft_isascii ***  \nGönderilen parametrenin ascii karakterleri içerisindemi sorgular\nmain dosyası yazılmadı");
	alt_cizhi();
}

void	test_isprint ()
{
	printf("*** ft_isprint ***  \nGönderilen parametrenin yazdırılabilir  karaktermi sorgular\nmain dosyası yazılmadı");
	alt_cizhi();
}

void	test_strlen ()
{
	printf("*** ft_strlen ***  \nGönderilen parametrenin uzunluğunu verir\nmain dosyası yazılmadı");
	alt_cizhi();
}

void	test_memset ()
{
	printf("ft_memset(char *str, int c) gönderilen dizinin 0 dan len kadar c ile değiştirir\n");
	char str[100] = "Hello World!";
	printf("%s\n", str);
	printf("%s\n", ft_memset(str, 'a', 5));
	printf("%s\n", str);
}

void	test_bzero ()
{
	printf("ft_bzero(char *str, int c) gönderilen dizinin 0 dan len kadar NULL ile değiştirir\n");
	char *b = "bzero";
	ft_bzero(b, '0');
	//printf("%s",b);
	alt_cizhi();
}

void	test_memcpy()
{
	printf("ft_memcpy()\nstr2 den str1 kopyalar len uzunluğu gonderilir.\n");
	char str1[30] = "mücahit";
	char str2[30] = "bugday";
	ft_memcpy(str1, str2, strlen(str2));
	printf("str1: %s\nstr2: %s\n",str1,str2);
	alt_cizhi();
}

void	test_memmove ()
{
	printf("***  ft_memmove  *** \nkopyalanacak konuma gider ara belleğe \nve kopyalananı ara belleğe yapıştırır.\nBu nedenle, hız memcpyve kararlılıkmemmove\n");
	char str1[] = "01234";
	char str2[] = "56789";
	printf("str1 before : %s\n", str1);
	ft_memmove(str1, str2, 1);
	printf("str1 after  : %s\n", str1);
	alt_cizhi();
}

void	test_strlcpy ()
{
	printf("*** ft_strlcpy ***  \nmain dosyası yazılmadı");
	alt_cizhi();
}

void	test_strlcat ()
{
	printf("*** ft_strlcat ***  \nmain dosyası yazılmadı");
	alt_cizhi();
}

void	test_toupper ()
{
	printf("*** ft_touper ***  \nBüyük harfleri küçük harf yapar");
	char ch1 = 'a';
	char ch2 = 'B';

	printf("%c\n", ft_toupper(ch1));
	printf("%c\n", ft_toupper(ch2));
	alt_cizhi();
}

void	test_tolower ()
{
	printf("*** ft_tolower ***  \nKüçük harfleri Büyük harf yapar");
	char ch1 = 'a';
	char ch2 = 'B';

	printf("%c\n", ft_tolower(ch1));
	printf("%c\n", ft_tolower(ch2));
	alt_cizhi();
}

void	test_strchr ()
{
	printf("***  ft_strchr  ***\ns dizisinde c dizisini arar. bulduğu karakterden itibare ngeri dönderir");
	char str[] = "123456789";
	const char* s1;
	char x = '5';
	s1 = strchr(str, x);
	printf("dizi: %s\naranacak eleman: %c\nsonuç: %s\n", str, x, s1);
	if (!s1)
		printf("yok");
	alt_cizhi();
}

void	test_strrchr ()
{
	printf("***  ft_strrchr  ***\ns dizisinin sonunda aramaya başlar\nbulduğu andan sonraki karakterleri bastırır.");
	char* str = "a1 a5 a3 a4 a5 a6";
	printf("%s\n", ft_strrchr(str, '5'));
	alt_cizhi();
}

void	test_strncmp ()
{
	printf("***  ft_strncmp  ***\ns1 dizisi s2 dizisine eşit mi büyükmü küçükmü kontrol eder");
	char *x = "abdefg123";
	char *y = "abdefg";
	int z = ft_strncmp(x,y,8);
	printf("%d",z);
	alt_cizhi();
}

void	test_memchr ()
{
	printf("***  ft_memchr  ***\nstr dizisinde c dizisini n karakterine kadar arar\nbulduğu karakterden sonrasını bastırı\nbulamadığı durumda null basar");
	char  str[] = "www.42kocaeli.tr";
	printf("%s\n", ft_memchr(str, '.', 3));
	alt_cizhi();
}

void	test_memcmp ()
{
	printf("***  ft_memcmp  ***\ns1 dizisi ile s2 dizsimi n karakerlerini kadar karşılaştırır. hangi char karakterlerini karşılaştırı s1 dizisi s2 den büyük-küçük-eşit olabilir.*/");
	char s1[] = "abda";
	char s2[] = "abdefg";
	printf("%d\n", ft_memcmp(s1, s2, 4));
	printf("%d\n", ft_memcmp(s1, s2, 6));
	alt_cizhi();
}

void	test_strnstr ()
{
	printf("***  ft_strnstr  ***\ndizi dizisinde ara dizisini arar len uzunluğuna kadar. \nbulduğu karakterden sonrasını döndürür. \nbulunmaz ise NULL döner");
	char s1[30] = "pen pineapple apple pen!";
	char* ptr = ft_strnstr(s1, "en", 10);
	printf("%s\n", ptr);
	char* ptr1 = ft_strnstr(s1, "en", 2);
	printf("%s\n", ptr1);
	alt_cizhi();
}

void	test_atoi ()
{
	printf("***  ft_atoi  ***\nisspace karakterlerini arar");
	char* s1 = "-123";
	char* s2 = "-123";
	char* s3 = "  123aa";
	char* s4 = "123 425";
	int num1 = ft_atoi(s1);
	int num2 = atoi(s2);
	int num3 = ft_atoi(s3);
	int num4 = ft_atoi(s4);
	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);
	printf("%d\n", num4);
	alt_cizhi();

}

void	test_calloc ()
{
	printf("***  ft_calloc  ***\ncount değeri kadar bellekte yer ayrılır. ");
	int *ip, id;
	ip = (int *) ft_calloc(5, sizeof(int));
	for (id=0; id<5; id++) {
		*(ip+id) = (id+1) * 10;
		printf("%p adresindeki değer: %d\n", (ip+id), *(ip+id));
	}
	free(ip);
}

void	test_strdup ()
{
	printf("***  ft_strdup  ***\nGönderilen karakterin benzerini oluşturu\ndizinin koyasını bellekte başka bi bölgeye kopyalar ve dönderir");
	printf("%s\n", ft_strdup("Hello world!"));
	alt_cizhi();
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void	test_substr ()
{
	printf("s dizisinin start tan başlayıp len kadar geri gönderir");
	char* str;
	str = ft_substr("Hello World!", 7, 2);
	printf("%s\n", str);
	alt_cizhi();
}

void	test_strjoin ()
{
	printf("//iki diziyi bellekte yer açarak açılan yere taşır.");
	/*
	s1 = Hellor
	s2 = World!
	ft_strjoin(s1,s2)=HelloWoeld!
	*/
	char s1[] = "Hello";
	char s2[] = "World!";
	printf("%s\n", ft_strjoin(s1, s2));
	alt_cizhi();
}

void	test_strtrim ()
{
	printf("\nbaştan ve sondan ikinci gönderilen dizideki karakterleri arar.başta  buldursa son karaltere kadar siler sonda bulursa bulduğu ilk karakterden itibaren siler");
	printf("\n%s\n", ft_strtrim("abacq", " a"));
	printf("%s\n", ft_strtrim("xavocad", "xa"));
	alt_cizhi();
}

void	test_split ()
{
	printf("// gönderilen karakterden sonrasını alır ve yenı dızı olusturur");
	int i = 0;
	char **tab;
	char *x = "Mücahit Buğday";
	tab = ft_split(x, ' ');
	while (i <= ft_strlen(*tab))
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	alt_cizhi();
}

void	test_itoa ()
{
	printf("//gönderilen int diziyi str dönüştürür.\n");
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(987654321));
	printf("%s\n", ft_itoa(-123456789));
	alt_cizhi();
}

char f(unsigned int i, char c)
{
	char str;
	str = c + 3;
	return (str);
}

void	test_strmapi ()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
	alt_cizhi();
}

void	test_striteri ()
{
	char str[] = "merhaba";
 	ft_striteri(str, *f);
 	printf("%s",str);
alt_cizhi();
}

void	test_ft_putchar_fd ()
{
	ssize_t a = open("deneme.txt", O_WRONLY);
	char b ='g';
	write(a, &b, 1);
	alt_cizhi();
}

void	test_ft_putstr_fd ()
{
	ssize_t b = open("deneme.txt", O_WRONLY);
	char *str = "Hello World!";
	ft_putstr_fd(str,b);
	alt_cizhi();
}

void	test_ft_putendl_fd ()
{
	ssize_t b = open("deneme.txt", O_WRONLY);
	char *str = "Hello World!";
	ft_putendl_fd(str,b);
	alt_cizhi();
}

void	test_ft_putnbr_fd ()
{
	int n = -1234;
	ssize_t a = open("deneme.txt", O_WRONLY);
	ft_putnbr_fd(n,a);
	alt_cizhi();
}



int main(void)
{
	// test_isalpha();
	// test_isdigit();
	// test_isalnum();
	// test_isascii();
	// test_isprint();
	// test_strlen();
	 test_memset();
	// test_bzero();
	// test_memcpy();
	// test_memmove();
	// test_strlcpy();
	// test_strlcat();
	// test_toupper();
	// test_tolower();
	// test_strchr();
	// test_strrchr();
	// test_strncmp();
	// test_memchr();
	// test_memcmp();
	// test_strnstr();
	// test_atoi();
	// test_calloc();
	// test_strdup();

	// test_substr();
	// test_strjoin();
	// test_strtrim();
	// test_split();
	// test_itoa();
	// test_strmapi();
	// test_striteri();
	// test_strmapi();
	// test_ft_putchar_fd();
	// test_ft_putstr_fd();
	// test_ft_putendl_fd();
	// test_ft_putnbr_fd();

	return 0;
}
