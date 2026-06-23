/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_ops_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 15:21:25 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/21 09:37:05 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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

static int	execute_rotate_operations(char *ops, t_list **a, t_list **b)
{
	if (!ft_strcmp(ops, "ra") || !ft_strcmp(ops, "ra\n"))
		rotate(a);
	else if (!ft_strcmp(ops, "rb") || !ft_strcmp(ops, "rb\n"))
		rotate(b);
	else if (!ft_strcmp(ops, "rr") || !ft_strcmp(ops, "rr\n"))
	{
		rotate(a);
		rotate(b);
	}
	else if (!ft_strcmp(ops, "rra") || !ft_strcmp(ops, "rra\n"))
		reverse_rotate(a);
	else if (!ft_strcmp(ops, "rrb") || !ft_strcmp(ops, "rrb\n"))
		reverse_rotate(b);
	else if (!ft_strcmp(ops, "rrr") || !ft_strcmp(ops, "rrr\n"))
	{
		reverse_rotate(a);
		reverse_rotate(b);
	}
	else
		return (0);
	return (1);
}

int	execute_ops(char *ops, t_list **a, t_list **b)
{
	if (!ft_strcmp(ops, "pa") || !ft_strcmp(ops, "pa\n"))
		push(b, a);
	else if (!ft_strcmp(ops, "pb") || !ft_strcmp(ops, "pb\n"))
		push(a, b);
	else if (!ft_strcmp(ops, "sa") || !ft_strcmp(ops, "sa\n"))
		swap(*a);
	else if (!ft_strcmp(ops, "sb") || !ft_strcmp(ops, "sb\n"))
		swap(*b);
	else if (!ft_strcmp(ops, "ss") || !ft_strcmp(ops, "ss\n"))
	{
		swap(*a);
		swap(*b);
	}
	else
	{
		if (!execute_rotate_operations(ops, a, b))
			return (0);
	}
	return (1);
}
