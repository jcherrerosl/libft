/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaherre <juaherre@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:55:51 by juaherre          #+#    #+#             */
/*   Updated: 2023/03/08 11:55:53 by juaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (dest == NULL || src == NULL || len == 0)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (s < d)
	{
		i = len - 1;
		while (i > 0)
		{
			d[i] = s[i];
			if (i == 0)
				break ;
			i--;
		}
		d[0] = s[0];
	}
	else
		ft_memcpy(dest, src, len);
	return (dest);
}
