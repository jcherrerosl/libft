#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int main()
{
    char *str; 

    str = "Hello";
    ft_bzero(str, 5);
    printf("%s\n", str);
    return (0);

}*/