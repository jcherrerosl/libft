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

static char	*write_pos(int n)
{
	int		len;
	char	*num;

	len = int_len(n);
	num = (char *)malloc(len + 1);
	if (!num)
		return (NULL);
	num[len] = '\0';
	len--;
	if (n == 0)
		num[0] = '0';
	while (n > 0)
	{
		num[len] = n % 10 + '0';
		n /= 10;
		len--;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	char	*aux;
	int		len;

	len = int_len(n) + 1;
	if (n == -2147483648)
		len = 11;
	aux = (char *)malloc(len + 1);
	if (!aux)
		return (NULL);
	if (n == -2147483648)
		ft_memcpy(aux, "-2147483648\0", len + 1);
	else if (n < 0)
	{
		n = -n;
		aux[0] = '-';
		ft_memcpy(aux + 1, write_pos(n), len + 1);
		free(write_pos(n));
	}
	else
	{
		free(aux);
		return (write_pos(n));
	}
	return (aux);
}
/*
#include <stdio.h>

int	main(void)
{  
	char *res = ft_itoa(-10004);
    printf("%s", res);
    free(res);
}
*/