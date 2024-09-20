#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "libft.h"
#include <bsd/string.h>

int    main(void)
{
	char    *str;
	const char    *src;
    src = (char *)malloc(sizeof(char) * 0);
	str = (char *)malloc(sizeof(char) * 0);
	strcpy(str, "");
//   printf("%d\n", ft_memset(str, 0, 5));
//	ft_memset(str, 0, 3);
//	ft_putnbr_fd(str, 1);
 //   printf(">%s<\n", ft_memcpy(str, "", 5));
//    printf("%s\n", ft_memccpy(str, src, 65 ,5));
//    ft_bzero(str, 5);
//    printf("%s\n", ft_memchr("", 65, 5));
//    printf("%d\n", ft_memcmp("hbla", "hcla", 5));
//    printf("%d\n", ft_strlen("hallojshaaiojsdiasjdhndiasjdndaisjdhndaisjdnasidjasidjnasd"));
//    printf("%ld\n", ft_strlcpy(str, "   ", 100));
//    strcpy(str, "hello");
//    printf("%d\n", ft_strlcat(str, "byebye", 20));
//    printf("%s\n", ft_strchr("Hola amigos", 'a'));
//    printf("%s\n", ft_strrchr("Hola amigos", 'a'));
//	printf("%s\n", ft_strnstr("shjdasihdquesaosakadsquesoasokasd", "queso", 30));
//	printf("%s\n", strnstr("shjdasihdquesaosakadsquesoasokasd", "queso", 30));
//	printf(">%s<\n", ft_substr("", 5, 3));
//	printf(">%s<",ft_substr("						", 9, 3));
//	printf(">%s<", ft_strjoin("",""));
//	ft_putstr_fd("", 2);
	printf(">%s<", ft_strtrim("   xxx   xxx", " x"));
//	printf(">%s<", ft_itoa(-1));

//    free(str);
	return (0);
}
