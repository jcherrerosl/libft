#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;
    unsigned char *s;
    unsigned char *d;

    s = (unsigned char *)src;
    d = (unsigned char *)dest;
    if (s < d)
    {
        i = n - 1;
        while (0 < i)
        {
            d[i] = s[i];
            i--;
        }
        d[i] = s[i];
    }
    else
        ft_memcpy(d, s, n);
    return (dest);
}