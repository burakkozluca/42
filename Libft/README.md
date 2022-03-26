* [`ft_isalpha`](ft_isalpha.c)			- Alfabetik karakter olup olmadığını kontrol eder.
* [`ft_isdigit`](ft_isdigit.c)			- Rakam olup olmadığını kontrol eder.
* [`ft_isalnum`](ft_isalnum.c)		  - Alfabetik bir harf ve bir rakam olup olmadığını eder.
* [`ft_isascii`](ft_isascii.c)			- ASCII karakter olup olmadığını kontrol eder.
* [`ft_isprint`](ft_isprint.c)			- Yazdırılabilir bir karakter olup olmadığını kontrol eder.
* [`ft_strlen`](ft_strlen.c)			  - Dizi uzunluğunu bulur.
* [`ft_memset`](ft_memset.c)		    - Girilen dizinin len kadar uzunluğuna c parametresini kopyalar.
* [`ft_bzero`](ft_bzero.c)		      - Girilen dizinin len kadar uzunluğuna 0 kopyalar.
* [`ft_memcpy`](ft_memcpy.c)		    - Src dizisinin karakterlerinin len kadar uzunluğunu dst'e kopyalar.
* [`ft_memmove`](ft_memmove.c)	    - Src dizisinin karakterlerinin len kadar uzunluğunu dst'ye kopyalar. Overlapping olmaz!  
* [`ft_strlcpy`](ft_strlcpy.c)			- Src dizisinin karakterlerinin(\0 ile sonlandırılmış) len kadar uzunluğunu dst'ye (\0 ile sonlandırılmış) kopyalar. 
* [`ft_strlcat`](ft_strlcat.c)			- Src dizisinin len parametre değeri kadar ilk karakterini,dst'nin sonuna ekleyerek yeni bir karakter dizisi oluşturur.
* [`ft_toupper`](ft_toupper.c)			- Küçük harfi büyük harfe çevirir.
* [`ft_tolower`](ft_tolower.c)			- Büyük harfi küçük harfe çevirir.   
* [`ft_strchr`](ft_strchr.c)			  - s dizisinde c parametresi ile gösterilen karakterin *ilk geçtiği yeri arar. Bellek adresini gösteren işaretçi geri döndürür.
* [`ft_strrchr`](ft_strrchr.c)			- s dizisinde c parametresi ile gösterilen karakterinin *son* geçtiği yeri arar. Bellek adresini gösteren işaretçi geri döndürür.    
* [`ft_strncmp`](ft_strncmp.c) 			- str1 dizisinin len kadar ilk uzunluğunu str2 dizisi ile karşılaştırır.    
* [`ft_memchr`](ft_memchr.c)		    - ptr dizisinin len kadar uzunluğunda c karakterinin geçtiği yeri arar. Bellek adresini geri döndürür.
* [`ft_memcmp`](ft_memcmp.c)		    - s1 dizisinin len kadar uzunlğunda s2 parametresini karşılaştırır. Bu işi bellekte yapar (strncmp'den farkı)
* [`ft_strnstr`](ft_strnstr.c)			- ara dizisini esas dizinin baştan len kadar uzunluğunda yeri var mı onu bulur.
* [`ft_atoi`](ft_atoi.c)		        - Karakter dizisini int'e çevirir.
* [`ft_calloc`](ft_calloc.c)	      - Size parametre değeri kadar olan bellekten num parametre değeri kadar sayıda bellek bloğunu tahsis eder ve tahsis edilen belleğin tamamını sıfır değeri ile doldurur.
* [`ft_strdup`](ft_strdup.c)		    - Str parametresi ile gösterilen karakter dizisinin aynısını geri döndürür. (Bellekte yer açarak geri döndürür.)
* [`ft_substr`](ft_substr.c)			  - S dizisinin istenilen indisinden başlayarak len uzunluğu kadar yazdırır.
* [`ft_strjoin`](ft_strjoin.c)			- İki stringi birbirine bağlar.
* [`ft_strtrim`](ft_strtrim.c)	    - set parametresinin elemanları baştan ve sondan bakılarak s dizisinin başında ve sonunda bulunuyor mu bakılır. Bulunuyorsa o karakterler silinir ve yeni string döndürülür.
* [`ft_split`](ft_split.c)				  - Diziyi istenilen karakterlerden bölerek yeni bir alt dizi oluşturur.
* [`ft_itoa`](ft_itoa.c)		        - int ifadeyi ASCII'ye dönüştürür.
* [`ft_strmapi`](ft_strmapi.c)			- s dizisinin her bir karakterine f fonksiyonunu uygular. Bellekte yeni oluşturduğu diziye kopyalar.
* [`ft_striteri`](ft_striteri.c)		- strmapi gibi ama tek bir fark o da yeni dizi oluşturmaz. Olan dizi üzerinde değişiklik yapar.
* [`ft_putchar_fd`](ft_putchar_fd.c)- write fonksiyonu
* [`ft_putstr_fd`](ft_putstr_fd.c)	- s stringini file descriptor içine yazar.
* [`ft_putendl_fd`](ft_putendl_fd.c)- s stringinin sonuna \n koyup file descriptora yazar.
* [`ft_putnbr_fd`](ft_putnbr_fd.c)	- n değerinin çıktısını verilen file descriptora yazar.
* [`ft_lstnew`](ft_lstnew.c)		    - 
* [`ft_lstadd_front`](ft_lstadd_front.c)-  
* [`ft_lstsize`](ft_lstsize.c)		  -
* [`ft_lstlast`](ft_lstlast.c)		  -
* [`ft_lstadd_back`](ft_lstadd_back.c)-	  
* [`ft_lstdelone`](ft_lstdelone.c)	-	
* [`ft_lstclear`](ft_lstclear.c)		-	
* [`ft_lstiter`](ft_lstiter.c)		  -
* [`ft_lstmap`](ft_lstmap.c)        -
