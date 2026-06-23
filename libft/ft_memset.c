/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 09:04:16 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/01 09:59:46 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t l)
{
	unsigned char	*p;
	unsigned char	value;
	size_t			i;

	p = (unsigned char *)ptr;
	value = (unsigned char)c;
	i = 0;
	if (i > l)
		return (ptr);
	while (i < l)
	{
		*p = value;
		p++;
		i++;
	}
	return (ptr);
}
