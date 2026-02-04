/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:07:02 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/04 13:56:56 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t l)
{
	unsigned char	*char_dest;
	unsigned char	*char_src;

	char_dest = (unsigned char *)dest;
	char_src = (unsigned char *) src;
	if (!dest && !src)
		return (NULL);
	while (l--)
	{
		*char_dest++ = *char_src++;
	}
	return (dest);
}
