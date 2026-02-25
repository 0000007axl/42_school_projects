/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 09:06:39 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/25 09:21:59 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

static int	ft_count_lenght(char **str, char *sep, int n)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < n)
	{
		len += ft_strlen(str[i]);
		i++;
	}
	return (len + (ft_strlen(sep) * (n - 1)));
}

static char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[i + len] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;

	if (size == 0)
	{
		str = (char *)malloc(sizeof(char) * 1);
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	str = (char *)malloc(sizeof(char) * (ft_count_lenght(strs, sep, size) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	str[i] = '\0';
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i != size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
