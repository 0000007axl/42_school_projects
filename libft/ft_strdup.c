/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 18:24:31 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/04 14:10:09 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	src_len;
	size_t	i;
	char	*dst;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	dst = malloc(sizeof(char) * (src_len + 1));
	if (dst == NULL)
		return (NULL);
	while (i <= src_len)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
