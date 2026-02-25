/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:36:54 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/25 09:27:02 by trakotos         ###   ########.fr       */
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

static char	**parse_av(char **strs, int size)
{
	char	*join;
	char	**splited;

	join = ft_strjoin(size, strs, " ");
	if (join == NULL)
		return (NULL);
	splited = ft_split(join, ' ');
	free(join);
	if (splited == NULL)
		return (NULL);
	return (splited);
}

t_list	*parse(int ac, char **av, int *alg_choice, int *is_bench)
{
	int		i;
	long	n;
	t_list	*a;
	char	**strs;

	a = NULL;
	i = 0;
	strs = parse_av(av + 1, ac - 1);
	while (strs[i] != NULL)
	{
		if (is_integer(strs[i]))
		{
			n = ft_atoi(strs[i]);
			if ((n > INT_MAX || n < INT_MIN) || is_duplicate(a, (int)n))
				return (lst_clear(&a));
			lst_push_back(&a, lst_new((int)n));
		}
		else if (is_flag(strs[i]))
			apply_flags(strs[i], alg_choice, is_bench);
		else
			return (lst_clear(&a));
		i++;
	}
	ft_cleanup_2d(strs, i);
	return (a);
}
