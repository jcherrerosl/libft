/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaherre <juaherre@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:54:56 by juaherre          #+#    #+#             */
/*   Updated: 2023/03/08 17:45:14 by juaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	char		k;

	i = ft_strlen(s);
	k = (char)c;
	while (i >= 0)
	{
		if (i == 0)
			return ((char *)s);
		if (s[i] == k)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
