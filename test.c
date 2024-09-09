#include <stdio.h>
#include "libft.h"
int    main(void)
{
    char    *str;
    const char    *src;
    src = malloc(sizeof(char) * 5);
    str = malloc(sizeof(char) * 5);
    printf("%s\n", ft_memset(str, 65, 5));
    printf("%s\n", ft_memcpy(str, src, 5));
    ft_bzero(str, 5);
    free(str);
    return (0);
}