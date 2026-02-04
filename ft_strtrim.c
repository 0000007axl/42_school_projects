/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 19:52:06 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/04 23:15:10 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*str;
	size_t	len;

	if (!s1)
		return ("");
	start = (char *)s1;
	while (*start != '\0' && ft_strchr(set, *start))
		start++;
	end = start + ft_strlen(start) - 1;
	while (end > start && ft_strchr(set, *end))
	{
		if (end == s1)
			return ("");
		end--;
	}
	len = end - start + 1;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_memmove (str, start, len);
	str[len] = '\0';
	return (str);
}
