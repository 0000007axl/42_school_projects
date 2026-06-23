/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 08:43:00 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/01 02:39:50 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*cpy(const char *src, char *dst, size_t i, size_t j)
{
	while (src[i] != '\0')
	{
		dst[i + j] = src[i];
		i++;
	}
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	len1;
	size_t	len2;

	len1 = 0;
	len2 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	new = malloc(len1 + len2 + 1);
	if (new == NULL)
		return (NULL);
	cpy(s1, new, 0, 0);
	cpy(s2, new, 0, len1);
	new[len1 + len2] = '\0';
	return (new);
}
