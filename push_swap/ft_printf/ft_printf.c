/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:47:58 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/19 10:29:51 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_format(char c)
{
	if (c == 'c' || c == 's' || c == 'd' || c == '%' || c == 'f')
		return (1);
	return (0);
}

static int	ft_format(va_list args, char c)
{
	int	n;

	n = 0;
	if (c == 'c')
		n += ft_putchar((char)va_arg(args, int));
	if (c == 's')
		n += ft_putstr(va_arg(args, char *));
	if (c == 'i' || c == 'd')
		n += ft_putnbr((long)va_arg(args, int));
	if (c == 'f')
		n += ft_putfloat(va_arg(args, double));
	if (c == '%')
		n += ft_putchar(c);
	return (n);
}

int	ft_printf(const char *str, ...)
{
	int		c;
	va_list	args;
	int		i;

	c = 0;
	i = 0;
	if (str == NULL)
		return (-1);
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (is_format(str[i]))
				c += ft_format(args, str[i]);
			else
				c += ft_putchar('%') + ft_putchar(str[i]);
		}
		else
			c += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (c);
}
