/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seramaro <seramaro@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 09:33:39 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/18 10:54:54 by seramaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i])
	{
		if (((unsigned char)s1[i] != (unsigned char)s2[i])
			|| ((unsigned char)s1[i] == '\0'))
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		else
			i++;
	}
	return (0);
}

int	is_flag(char *str)
{
	if (!ft_strcmp(str, "--bench") || !ft_strcmp(str, "--simple")
		|| !ft_strcmp(str, "--medium") || !ft_strcmp(str, "--complex"))
		return (1);
	return (0);
}

void	apply_flags(char *str, int *alg_choice, int *is_bench)
{
	if (!ft_strcmp(str, "--bench"))
		*is_bench = 1;
	if (!ft_strcmp(str, "--adaptive"))
		*alg_choice = 0;
	if (!ft_strcmp(str, "--simple"))
		*alg_choice = 1;
	if (!ft_strcmp(str, "--medium"))
		*alg_choice = 2;
	if (!ft_strcmp(str, "--complex"))
		*alg_choice = 3;
}

t_ops_count	*new_count_ops(void)
{
	t_ops_count	*ops_count;

	ops_count = (t_ops_count *)malloc(sizeof(t_ops_count));
	if (ops_count == NULL)
		return (NULL);
	ops_count->pa = 0;
	ops_count->pb = 0;
	ops_count->ra = 0;
	ops_count->rra = 0;
	ops_count->rb = 0;
	ops_count->rrb = 0;
	ops_count->rr = 0;
	ops_count->rrr = 0;
	ops_count->sa = 0;
	ops_count->sb = 0;
	ops_count->ss = 0;
	ops_count->total_ops = 0;
	return (ops_count);
}
