/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfonsojbf <albustos@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 02:24:24 by alfonsojbf        #+#    #+#             */
/*   Updated: 2026/05/08 02:29:18 by alfonsojbf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	count;
	int	i;
	int	in_word;

	count = 0;
	i = 0;
	in_word = 0;
	while (str[i])
	{
		if (str[i] == c && in_word)
			in_word = 0;
		if (str[i] != c && !in_word)
		{
			count++;
			in_word = 1;
		}
		i++;
	}
	return (count);
}

char	*dup_word(char const *s, int start, int end)
{
	int		size;
	char	*word;
	int		i;

	size = end - start;
	word = malloc(sizeof(char) * (size + 1));
	i = 0;
	if (!word)
		return (NULL);
	while (s[start] && i < size)
	{
		word[i] = s[start];
		start++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	ssize_t	start;
	int		j;
	size_t	finish;

	arr = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	start = -1;
	j = 0;
	finish = 0;
	while (finish <= ft_strlen(s))
	{
		if (s[finish] != c && start < 0)
			start = finish;
		else if ((s[finish] == c || finish == ft_strlen(s)) && start >= 0)
		{
			arr[j++] = dup_word(s, start, finish);
			start = -1;
		}
		finish++;
	}
	arr[j] = NULL;
	return (arr);
}
