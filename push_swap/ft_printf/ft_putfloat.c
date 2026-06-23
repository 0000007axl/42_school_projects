/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:14:38 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/19 15:51:25 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putfloat(double num)
{
	int		c;
	long	dec;

	c = 0;
	c += ft_putnbr((long)num);
	c += ft_putchar('.');
	dec = ((long)(num * 100)) % 100;
	c += ft_putnbr(dec);
	if (dec == 0)
		c += ft_putnbr(0);
	return (c);
}
