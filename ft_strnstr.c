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
	if (!needle)
		return ((char *)haystack);
	while (haystack[i])
	{
		while (haystack[i] == needle[j] && j < len)
		{
			if (j == len - 1)
				return ((char *)(haystack + i - j));
			i++;
			j++;
		}
		i = i - j;
		j = 0;
		i++;
	}
	return (0);
}
