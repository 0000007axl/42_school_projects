/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 11:17:00 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/01 12:44:01 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	intlen(long long n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_ltoa(long n)
{
	char	*res;
	size_t	len;
	size_t	signe;

	len = intlen(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	signe = 0;
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
		signe = 1;
	}
	res[len] = '\0';
	if (n == 0)
		res[signe++] = '0';
	while (len - signe > 0)
	{
		res[len - 1] = (char)(n % 10 + '0');
		n /= 10;
		len--;
	}
	return (res);
}
