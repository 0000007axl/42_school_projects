/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:11:28 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/04 23:13:52 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t l)
{
	unsigned char	*char_dest;
	unsigned char	*char_src;

	char_dest = (unsigned char *) dest;
	char_src = (unsigned char *) src;
	if (char_dest < char_src)
	{
		while (l--)
			*char_dest++ = *char_src++;
	}
	else if (char_dest > char_src)
	{
		while (l--)
			char_dest[l] = char_src[l];
	}
	return (dest);
}
