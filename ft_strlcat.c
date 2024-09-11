#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j;
    size_t  dest_len;

    dest_len = ft_strlen(dst);
    j = 0;
    i = dest_len;
    if (size <= dest_len)
        return(size + ft_strlen(src));
    while (src[j] && i < size - 1)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (dest_len + ft_strlen(src));
}
