#include "libft.h"

char    *ft_strstr(const char *haystack, const char *needle)
{
    size_t  i;
    size_t  j;

    if (needle[0] == '\0')
        return ((char *)haystack);

    i = 0;
    while (haystack[i])
    {
        j = 0;
        while (needle[j] == haystack[i + j] && needle[j] && haystack[i + j])
        {
            j++;
            if (needle[j] == '\0')
                return ((char *)(haystack + i));
        }
        i++;
    }
    return (NULL);
}