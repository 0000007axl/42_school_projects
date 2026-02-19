/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:58:45 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/03 16:53:51 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n)
{
	char	*nbr;
	int		i;

	i = 0;
	nbr = ft_ltoa(n);
	if (nbr == NULL)
		return (0);
	i += ft_putstr(nbr);
	free(nbr);
	return (i);
}
