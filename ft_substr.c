/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaherre <juaherre@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:40:56 by juaherre          #+#    #+#             */
/*   Updated: 2023/03/13 11:40:57 by juaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (0);
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub || sub[0] == '\0')
		return (0);
	i = 0;
	while (i < len && s[(size_t)start] != '\0' && (size_t)start < ft_strlen(s))
	{
		sub[i] = s[(size_t)start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("njo : %s\n", ft_substr("bonjour", 2, 3));
	printf("njour : %s\n", ft_substr("bonjour", 2, 5));
	printf("njour : %s\n", ft_substr("bonjour", 2, 6));
	printf("r : %s\n", ft_substr("bonjour", 6, 1));
	printf("'' : %s\n",	ft_substr("bonjour", 6, 0));
	char stest[100] = "test";
	memset(stest + 6, 'a', 50); 
	printf("'' : %s\n",	ft_substr(stest, 10, 1));
	return (0);
}*/