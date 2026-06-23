/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 01:21:49 by seramaro          #+#    #+#             */
/*   Updated: 2026/01/24 19:06:51 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	size_t		len;
	char		*searcher;

	i = 0;
	len = 0;
	searcher = (char *)s;
	while (s[len] != '\0')
		len++;
	while (i <= len)
	{
		if (*searcher == (char) c)
			return (searcher);
		searcher++;
		i++;
	}
	return (NULL);
}
