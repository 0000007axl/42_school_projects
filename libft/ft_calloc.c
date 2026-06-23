/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 15:20:13 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/04 15:16:36 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	char	*memory;
	size_t	i;

	i = 0;
	if (number != 0 && size > (__SIZE_MAX__ / number))
		return (NULL);
	memory = malloc(size * number);
	if (memory == NULL)
		return (NULL);
	while (i < (size * number))
	{
		memory[i] = (char)0;
		i++;
	}
	return (memory);
}
