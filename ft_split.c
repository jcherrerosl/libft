/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaherre <juaherre@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:00:04 by juaherre          #+#    #+#             */
/*   Updated: 2023/03/16 11:00:06 by juaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*get_word(char const *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = ft_substr(s, 0, i);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**array;

	i = 0;
	j = 0;
	array = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!array)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			array[j] = get_word(s + i, c);
			if (!array[j])
				return (NULL);
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	array[j] = NULL;
	return (array);
}

/*

#include <stdio.h>

int	main(void)
{
	char *s = "Hola,mundo,como,estas";
	char **array = ft_split(s, ',');

	if (array == NULL)
	{
		printf("Error: no se pudo dividir la cadena.\n");
		return (1);
	}
	int i = 0;
	while (array[i] != NULL)
	{
		printf("%s\n", array[i]);
		free(array[i]);
		i++;
	}
	free(array);
	return (0);
}
*/