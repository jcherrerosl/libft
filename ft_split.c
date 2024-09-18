/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:24:46 by juanherr          #+#    #+#             */
/*   Updated: 2024/09/18 13:58:48 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
		{
			in_word = 0;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;

	matrix = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!matrix)
		return (NULL);
	

}

int	main(void)
{
	char	*str;
	int		i;

	str = "Hola hola y adios";
	i = 0;
	while (ft_split(str, ' ')[i] != NULL)
	{
		printf("%s", ft_split(str, ' ')[i]);
	}

	printf("%zu",count_words(str, ' '));
	return (0);
}
