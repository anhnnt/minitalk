/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:45:22 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/25 14:43:59 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_array(char **array, int i)
{
	while (i-- > 0)
		free(array[i]);
	free(array);
}

size_t	count_character(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

size_t	word_leng(char const *s, char c, size_t start)
{
	int	size;

	size = 0;
	while (s[start] != c && s[start])
	{
		size++;
		start++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	j;
	size_t	word_size;

	i = 0;
	j = -1;
	array = (char **)malloc(sizeof(char *) * (count_character(s, c) + 1));
	if (!array)
		return (NULL);
	while (++j < count_character(s, c))
	{
		while (s[i] == c)
			i++;
		word_size = word_leng(s, c, i);
		array[j] = ft_substr(s, i, word_size);
		if (!array[j])
		{
			free_array(array, j);
			return (NULL);
		}
		i = word_size + i;
	}
	array[j] = NULL;
	return (array);
}
