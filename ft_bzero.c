/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:36:32 by seramaro          #+#    #+#             */
/*   Updated: 2026/01/25 12:41:41 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t l)
{
	unsigned char	*p;

	p = (unsigned char *)ptr;
	while (l--)
	{
		*p++ = '\0';
	}
}
