#include <stdio.h>
#include <string.h>
#include "libft.h"
int    main(void)
{
    char    *str;
    const char    *src;
//   src = malloc(sizeof(char) * 10);
    str = malloc(sizeof(char) * 16);
//    printf("%s\n", ft_memset(str, 65, 5));
//    printf("%s\n", ft_memcpy(str, src, 5));
//    printf("%s\n", ft_memccpy(str, src, 65 ,5));
//    ft_bzero(str, 5);
//    strcpy(str, "Hallo");
//    printf("%s\n", ft_memchr("HALLO", 65, 5));
//    printf("%d\n", ft_memcmp("hbla", "hcla", 5));
//    printf("%d\n", ft_strlen("hallojshaaiojsdiasjdhndiasjdndaisjdhndaisjdnasidjasidjnasd"));
//    printf("%s\n", ft_strncpy(str, "hallokasjodijhsdoi", 5));
    strcpy(str, "hello");
    printf("%s\n", ft_strncat(str, " byebye", 2));

    free(str);
    return (0);
}