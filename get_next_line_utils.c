/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 11:34:25 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/01 09:38:27 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = 0;
	ch = (char)c;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == ch)
		return ((char *)&s[i]);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*res;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	res = (char *)malloc(sizeof(char) * (ft_index_of(s1, '\0')
				+ ft_index_of(s2, '\0') + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (s1 != NULL && s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 != NULL && s2[j] != '\0')
		res[i++] = s2[j++];
	res[i] = '\0';
	if (s1 != NULL)
		free(s1);
	return (res);
}

size_t	ft_index_of(const char *s, char c)
{
	size_t	l;

	l = 0;
	while (s != NULL && s[l] != '\0' && s[l] != c)
		l++;
	return (l);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start > ft_index_of(s, '\0'))
		len = 0;
	if (len > ft_index_of(s, '\0') - start)
		len = ft_index_of(s, '\0') - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	if (start > ft_index_of(s, '\0'))
	{
		sub[0] = '\0';
		return (sub);
	}
	i = 0;
	while (i < len && s[i + start] != '\0')
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
