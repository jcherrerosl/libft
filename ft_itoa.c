/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaherre <juaherre@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:14:28 by juaherre          #+#    #+#             */
/*   Updated: 2023/03/14 13:14:33 by juaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		n = -n;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*num;
	int		neg;

	len = int_len(n);
	num = (char *)malloc(sizeof(char) * len);
	if (!num)
		return (NULL);
	if (n == -2147483648)
		num = ft_memcpy(num, "-2147483648", len);
	else
	{
		neg = 1;
		if (n < 0)
		{
			neg = -1;
			n = -n;
		}
		while (len > 0)
		{
			num[len - 1] = n % 10 + '0';
			n /= 10;
			len--;
		}
		if (neg == -1)
			num = ft_strjoin("-", num);
	}
	return (num);
}

#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	free(ft_itoa(-2147483648));
	return (0);
}
