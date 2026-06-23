/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 01:49:13 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/01 02:39:17 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*searcher;

	searcher = (char *)s;
	len = 0;
	while (*searcher != '\0')
	{
		len++;
		searcher++;
	}
	while (len >= 0)
	{
		if (*searcher == (char)c)
			return (searcher);
		searcher--;
		len--;
	}
	return (NULL);
}
