/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:36:54 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/18 01:09:55 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_integer(char *str)
{
	size_t	i;

	i = 0;
	if (!str || str[0] == '\0')
		return (0);
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

static long	ft_atoi(const char *str)
{
	int			i;
	long int	res;
	int			sign;

	i = 0;
	res = 0;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

static int	is_duplicate(t_list *a, int n)
{
	while (a != NULL)
	{
		if (a->value == n)
			return (1);
		a = a->next;
	}
	return (0);
}

int	parse(int ac, char **av, t_list **a)
{
	int		i;
	long	n;

	i = 1;
	while (i < ac)
	{
		if (is_integer(av[i]))
		{
			n = ft_atoi(av[i]);
			if ((n > INT_MAX || n < INT_MIN) || is_duplicate(*a, (int)n))
			{
				lst_clear(a);
				return (0);
			}
			lst_push_back(a, lst_new((int)n));
		}
		else
		{
			lst_clear(a);
			return (0);
		}
		i++;
	}
	return (1);
}
