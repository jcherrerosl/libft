/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:24:46 by juanherr          #+#    #+#             */
/*   Updated: 2024/09/19 13:50:55 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*dup;

	i = 0;
	dup = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!dup)
		return (NULL);
	while (s[i] && i < n)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = s[i];
	return (dup);
}

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

void	split_process(char **matrix, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	start = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (start < i)
			{
				matrix[j] = ft_strndup(s + start, i - start - 1);
				j++;
			}
			start = i + 1;
		}
		i++;
	}
	if (start < i)
		matrix[j] = ft_strndup(s + start, i - start);
	matrix[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	i;
	size_t	j;
	size_t	start;

	matrix = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!matrix)
		return (NULL);
	i = 0;
	j = 0;
	start = 0;
	split_process(matrix, s, c);
	return (matrix);
}

#include <stdio.h>

int	main(void)
{
	char	*str;
	int		i;

	str = "";
	i = 0;
	while (ft_split(str, ' ')[i] != NULL)
	{
		printf(">%s<", ft_split(str, ' ')[i]);
		i++;
	}

	//printf("%zu",count_words(str, ' '));
	return (0);
}
