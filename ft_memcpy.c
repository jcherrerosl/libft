#include "libft.h"

void *ft_memcpy(void *dest, const void * src, size_t n)
{
    size_t  i;
    unsigned char *s;
    unsigned char *d;

    s = (unsigned char *)src;
    d = (unsigned char *)dest;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}
/*int main(void)
{
    unsigned char *dest;
    char *src;

    src = (unsigned char *) malloc(sizeof(char) * 5);
    dest = (char *) malloc(sizeof(char) * 10);
    src = strcpy(src, "Hello");
    dest = strcpy(dest, "Bybye");
    printf("%s\n", ft_memcpy(dest, src, 3));
    return (0);
}*/