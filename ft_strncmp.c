/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaherre <juaherre@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:04:21 by juaherre          #+#    #+#             */
/*   Updated: 2023/03/08 17:04:22 by juaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*us1;
	unsigned char	*us2;

	i = 0;
	if ((n == 0) || s1 == NULL || s2 == NULL)
		return (0);
	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	while (us1[i] == us2[i] && (us1[i] != 0 || us2[i] != 0) && (i < (n - 1)))
	{
		i++;
	}
	return (us1[i] - us2[i]);
}
