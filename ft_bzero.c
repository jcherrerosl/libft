#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

int main()
{
    char *str; 

    str = "Hello";
    ft_bzero(str, 5);
    printf("%s\n", str);
    return (0);

}