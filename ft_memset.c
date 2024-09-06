#include <stddef.h>

void	*ft_memset(void *b, int c, size_t size)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)b;
	while (i < size)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}