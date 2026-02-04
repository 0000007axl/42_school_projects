/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 01:08:30 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/01 02:41:16 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int index, char c))
{
	char	*str;
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (s[len])
		len++;
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
