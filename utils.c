/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:32:50 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/11 14:29:20 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(const char *nptr)
{
	long	res;
	int		i;
	long	signe;

	i = 0;
	res = 0;
	signe = 1;
	if (nptr == NULL)
		return (0);
	if ((nptr[i] == '-' || nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			signe *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res * signe);
}

int	is_integer(char *str)
{
	size_t	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] > '9' || str[i] < '0')
			return (0);
		i++;
	}
	return (1);
}

void	put_str(char *str, int fd)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(fd, &str[i], 1);
		i++;
	}
}

int	get_element(t_list **stack, int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (is_integer(av[i]))
			lst_push_back(stack, lst_new(ft_atol(av[i])));
		else
		{
			lst_clear(stack);
			return (0);
		}
		i++;
	}
	return (1);
}
