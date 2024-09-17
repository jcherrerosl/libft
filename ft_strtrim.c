/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:53:31 by juanherr          #+#    #+#             */
/*   Updated: 2024/09/17 20:02:40 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*str;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = 0;
	while (j >= 0 && ft_strrchr(set, s1[j]))
		j++;
	len = j - i + 1;
	str = (char *)malloc((len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + i, len + 1);
	return (str);
}
