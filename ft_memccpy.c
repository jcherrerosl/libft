#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t  i;
    unsigned char *s;
    unsigned char *d;

    s = (unsigned char *)src;
    d = (unsigned char *)dest;
    i = 0;
    while (i < n)
    {
        if (s[i] == (unsigned char)c)
            return(dest + i + 1);
        d[i] = s[i];
        i++;
    }
    return (NULL);
}