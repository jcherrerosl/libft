#include "libft.h"

char    *ft_strdup(const char *s)
{
    size_t  i;
    char    *dup;

    i = 0;
    dup = (char *)malloc(ft_strlen(s) + 1);
    while (s[i])
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}