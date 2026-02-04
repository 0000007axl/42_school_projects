/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 22:53:31 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/01 02:38:43 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = 0;
	dst_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (dst_len < dst_size && dst[dst_len] != '\0')
		dst_len++;
	if (dst_len == dst_size)
		return (src_len + dst_size);
	while (src[i] != '\0' && (dst_len + i + 1) < dst_size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len < dst_size)
		dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}
