/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaherre <juaherre@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:28:04 by juaherre          #+#    #+#             */
/*   Updated: 2023/03/09 11:28:06 by juaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle == NULL)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (ft_memcmp(haystack, needle, len) == 0)
			return ((char *)(haystack + i - j))
		i = i - j;
		j = 0;
		i++;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	char *str = "Hola esto es una prueba";
	printf("%s", ft_strnstr(str, "Hola", 6));
	return (0);
}
