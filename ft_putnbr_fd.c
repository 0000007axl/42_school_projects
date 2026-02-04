/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 04:12:08 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/04 23:15:07 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nbr;
	char		to_print;

	nbr = n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr = nbr * (-1);
	}
	if (nbr > 9)
	{
		to_print = (nbr % 10) + '0';
		ft_putnbr_fd(nbr / 10, fd);
		write(fd, &(to_print), 1);
	}
	if (nbr <= 9)
	{
		to_print = nbr + '0';
		write (fd, &(to_print), 1);
	}
}
