/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:24:03 by juanherr          #+#    #+#             */
/*   Updated: 2024/09/19 12:13:39 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	strlen;

	sub = (char *)malloc(len + 1);
	if (!sub || !s)
		return (NULL);
	i = 0;
	strlen = ft_strlen(s);
	while (s[start + i] && i < len && start < strlen)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
