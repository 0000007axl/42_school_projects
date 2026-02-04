/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 03:00:10 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/01 08:42:52 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int index, char *c))
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
	{
		f(len, &s[len]);
		len++;
	}
}
