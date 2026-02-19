/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 00:43:16 by seramaro          #+#    #+#             */
/*   Updated: 2026/02/19 16:22:14 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_3_element(t_list **a, t_ops_count *ops_count, int size)
{
	int	max_index;

	max_index = get_max_index(*a);
	if (size == 2)
	{
		if ((*a)->index > (*a)->next->index)
			sa(*a, ops_count);
		return ;
	}
	if ((*a)->index == max_index)
		ra(a, ops_count);
	else if ((*a)->next->index == max_index)
		rra(a, ops_count);
	if ((*a)->index > (*a)->next->index)
		sa(*a, ops_count);
}

static void	sort_5_element(t_list **a, t_list **b, t_ops_count *ops_count,
		int size)
{
	if (size == 5)
	{
		push_min_to_b(a, b, ops_count);
		push_min_to_b(a, b, ops_count);
		sort_3_element(a, ops_count, size);
		pa(a, b, ops_count);
		pa(a, b, ops_count);
	}
	else if (size == 4)
	{
		push_min_to_b(a, b, ops_count);
		sort_3_element(a, ops_count, size);
		pa(a, b, ops_count);
	}
	else
		sort_3_element(a, ops_count, size);
}

void	adaptive_sort(t_list **a, t_list **b, t_ops_count *ops_count)
{
	float	disorder;
	int		size;

	size = lst_size(*a);
	disorder = compute_disorder(*a);
	if (size <= 5)
	{
		index_lst(*a);
		sort_5_element(a, b, ops_count, size);
		return ;
	}
	if (disorder <= 1e-6)
		return ;
	if (disorder < 0.2)
		simple_sort(a, b, ops_count);
	else if ((disorder >= 0.2) && (disorder < 0.5))
		medium_sort(a, b, ops_count);
	else
		complex_sort(a, b, ops_count);
}
