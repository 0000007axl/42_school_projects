/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 23:03:22 by seramaro          #+#    #+#             */
/*   Updated: 2026/01/29 15:51:25 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

size_t	word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**create_space(size_t count)
{
	char	**space;

	space = malloc((sizeof(char *) * (count + 1)));
	if (!space)
		return (NULL);
	return (space);
}

char	*create_word(const char *ptr, char c)
{
	char	*str;
	size_t	i;
	size_t	len;

	i = 0;
	len = word_len(ptr, c);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < (len))
	{
		str[i] = ptr[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	w[3];

	w[0] = 0;
	w[1] = 0;
	res = create_space(count_words(s, c));
	if (!s || !res)
		return (NULL);
	while (w[1] < count_words(s, c))
	{
		while (s[w[0]] == c)
			w[0]++;
		res[w[1]] = create_word(s + w[0], c);
		if (!res[w[1]])
		{
			w[2] = 0;
			while (w[2] < w[1])
				free(res[w[2]++]);
			return (free(res), NULL);
		}
		w[0] += word_len(s + w[0], c);
		w[1]++;
	}
	res[w[1]] = NULL;
	return (res);
}
/*w[0] counts, w[1] & w[2] are the usual i and j*/